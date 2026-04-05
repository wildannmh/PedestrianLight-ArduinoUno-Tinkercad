# Traffic Light dengan Interupsi Pedestrian
**Nama:** Wildan Munawwar Habib  
**NIM:** H1D023045  
**Tugas 4 - Pemrograman Sistem Tertanam**

---

## Deskripsi Proyek
Proyek ini merupakan simulasi sistem *Traffic Light* (lampu lalu lintas) jalan raya tunggal yang dilengkapi dengan fitur **Interupsi Pedestrian**. Sistem ini dirancang untuk memberikan prioritas utama kepada kendaraan (Lampu Hijau) dan hanya akan memberikan akses menyeberang kepada pejalan kaki ketika tombol ditekan.

## Spesifikasi Sistem
1.  **Lampu Kendaraan**: Terdiri dari 3 LED (Merah, Kuning, Hijau).
2.  **Lampu Pedestrian**: Terdiri dari 2 sisi penyeberangan (Sisi 1 dan Sisi 2), masing-masing memiliki 2 LED (Merah, Hijau).
3.  **Logika Interupsi**:
    * **Standby**: Lampu Hijau kendaraan ON, semua lampu Merah pedestrian ON.
    * **Trigger**: Tombol pada pin 9 ditekan (Logika LOW).
    * **Transition Out**: Hijau kendaraan mati -> Kuning berkedip 3x -> Merah kendaraan ON.
    * **Crossing Phase**: Hijau pedestrian (Sisi 1 & 2) menyala selama 5 detik.
    * **Transition In**: Hijau pedestrian mati -> Kuning kendaraan berkedip 3x -> Kembali ke Hijau kendaraan.

## Konfigurasi Pin
| Komponen | Nama Pin | Pin Arduino |
| :--- | :--- | :---: |
| **Traffic Kendaraan** | Merah | 2 |
| | Kuning | 3 |
| | Hijau | 4 |
| **Pedestrian Sisi 1** | Merah (pMerah1) | 5 |
| | Hijau (pHijau1) | 6 |
| **Pedestrian Sisi 2** | Merah (pMerah2) | 7 |
| | Hijau (pHijau2) | 8 |
| **Tombol Interupsi** | Tombol | 9 (Internal Pull-up) |

## Cuplikan Rangkaian (Tinkercad)
Berikut adalah susunan komponen dan pengkabelan yang digunakan:
<img width="1536" height="632" alt="Lampu Pejalan Kaki" src="https://github.com/user-attachments/assets/14a34e01-2884-476d-8eb5-3909534f1b12" />

## Tautan Simulasi
Simulasi interaktif dapat diakses melalui tautan berikut:  
https://www.tinkercad.com/things/hkRY6Zf8tCZ-lampu-pejalan-kaki?sharecode=UQLdjCAl4fHibxwo2CP3fu93cBEG0WR01DumpIZGGx4
