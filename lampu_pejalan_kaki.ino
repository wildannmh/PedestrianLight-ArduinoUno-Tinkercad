int Merah = 2, Kuning = 3, Hijau = 4;
int pMerah1 = 5, pHijau1 = 6;
int pMerah2 = 7, pHijau2 = 8;
int tombol = 9;

void setup() {
  for(int i=2; i<=8; i++) pinMode(i, OUTPUT);
  pinMode(tombol, INPUT_PULLUP);
}

// Fungsi mengedipkan kuning 3x
void kedipKuning() {
  for(int i=0; i<3; i++) {
    digitalWrite(Kuning, HIGH);
    delay(500);
    digitalWrite(Kuning, LOW);
    delay(500);
  }
}

void loop() {
  // Kondisi Default
  digitalWrite(Hijau, HIGH);
  digitalWrite(Merah, LOW);
  digitalWrite(Kuning, LOW);
  
  digitalWrite(pMerah1, HIGH);
  digitalWrite(pMerah2, HIGH);
  digitalWrite(pHijau1, LOW);
  digitalWrite(pHijau2, LOW);

  // Cek jika tombol ditekan
  if (digitalRead(tombol) == LOW) {
    
    // 1. Persiapan Berhenti (Hijau ke Merah)
    digitalWrite(Hijau, LOW);
    kedipKuning(); // Kuning 3x
    digitalWrite(Merah, HIGH);
    delay(1000); // Jeda sebelum pedestrian jalan

    // 2. Pedestrian Jalan
    digitalWrite(pMerah1, LOW);
    digitalWrite(pMerah2, LOW);
    digitalWrite(pHijau1, HIGH);
    digitalWrite(pHijau2, HIGH);
    delay(5000); // Durasi menyeberang

    // 3. Pedestrian Berhenti
    digitalWrite(pHijau1, LOW);
    digitalWrite(pHijau2, LOW);
    digitalWrite(pMerah1, HIGH);
    digitalWrite(pMerah2, HIGH);
    delay(1000); // Jeda aman sebelum kendaraan jalan

    // 4. Persiapan Jalan (Merah ke Hijau)
    kedipKuning(); // Kuning 3x
    
    // Setelah ini loop akan otomatis kembali ke atas (Hijau HIGH)
  }
}