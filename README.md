# ⏱️ Stopwatch & Countdown Timer (C++)

![C++](https://img.shields.io/badge/language-C++11-blue.svg)
![Platform](https://img.shields.io/badge/platform-Windows-lightgrey.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/build-passing-brightgreen.svg)
![Stars](https://img.shields.io/github/stars/username/Stopwatch-Countdown-Cpp?style=social)
![Forks](https://img.shields.io/github/forks/username/Stopwatch-Countdown-Cpp?style=social)
![Issues](https://img.shields.io/github/issues/username/Stopwatch-Countdown-Cpp)

## 📌 Deskripsi
Program multifungsi berbasis C++ yang menyediakan:
- **Stopwatch**: menghitung waktu naik (start, stop, reset).
- **Countdown Timer**: menghitung mundur dari waktu yang ditentukan.
- **Beep Notification**: bunyi alarm saat countdown selesai.
- **Clear Screen**: tampilan console bersih dengan `system("cls")`.

Program ini cocok untuk latihan logika dasar C++ (loop, kondisi, chrono, thread) sekaligus sebagai portofolio project sederhana.

---

## 🎯 Fitur
- Menu utama untuk memilih mode:
  - `1` → Stopwatch
  - `2` → Countdown Timer
  - `q` → Quit
- Stopwatch:
  - `s` → Start
  - `t` → Stop
  - `r` → Reset
  - `q` → Keluar dari mode stopwatch
- Countdown Timer:
  - Input jumlah detik
  - Hitung mundur real‑time
  - Bunyi beep saat selesai
- Tampilan console otomatis bersih tiap update (`system("cls")`).

---

## ⚙️ Cara Menjalankan
1. **Clone repository**:
   ```bash
   git clone https://github.com/username/Stopwatch-Countdown-Cpp.git

2. Compile program (pastikan pakai standar C++11 atau lebih baru) :
   Bash
   g++ main.cpp -o timer -std=c++11
   Jika pakai Dev C++, ubah setting compiler ke ISO C++11(-std=c++1).

3. Jalankan Program :
   Bash
   ./timer

OUTPUT YANG DIHASILKAN

1. Mode Stopwatch :
   === Program Multifungsi ===
   Menu:
   1 = Stopwatch
   2 = Countdown Timer
   q = Quit

   Pilih mode: 1
   === Stopwatch Mode ===
   s = start, t = stop, r = reset, q = keluar stopwatch

   Masukkan pilihan: s
   Stopwatch dimulai!

   Masukkan pilihan: t
   Stopwatch berhenti. Waktu: 3.245 detik

   Masukkan pilihan: r
   Stopwatch direset.

   Masukkan pilihan: q
   Keluar dari Stopwatch Mode.

2. Mode Countdown Timer :
   === Program Multifungsi ===
   Menu:
   1 = Stopwatch
   2 = Countdown Timer
   q = Quit

   Pilih mode: 2
   === Countdown Timer Mode ===
   Masukkan waktu (detik): 5
   Sisa waktu: 5 detik
   Sisa waktu: 4 detik
   Sisa waktu: 3 detik
   Sisa waktu: 2 detik
   Sisa waktu: 1 detik
   Sisa waktu: 0 detik
   Waktu habis! ⏰ (bunyi beep)

---

## 📜 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 🙏 Acknowledgements
- Terima kasih kepada komunitas open-source C++.
- Program ini dibuat untuk latihan logika dasar dan portofolio pribadi.


