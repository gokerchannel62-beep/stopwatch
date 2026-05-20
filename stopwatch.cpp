#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h> // untuk beep di Windows
using namespace std;
using namespace std::chrono;

int main() {
    bool running = false;
    steady_clock::time_point start;
    steady_clock::time_point end;
    duration<double> elapsed(0);
    char pilihan;

    cout << "=== Program Multifungsi ===" << endl;
    cout << "Menu: " << endl;
    cout << "1 = Stopwatch" << endl;
    cout << "2 = Countdown Timer" << endl;
    cout << "q = Quit" << endl;

    while (true) {
        cout << "\nPilih mode: ";
        cin >> pilihan;

        // ================= STOPWATCH =================
        if (pilihan == '1') {
        	system("cls");
            cout << "\n=== Stopwatch Mode ===" << endl;
            cout << "s = start, t = stop, r = reset, q = keluar stopwatch" << endl;

            while (true) {
                cout << "\nMasukkan pilihan: ";
                cin >> pilihan;

                if (pilihan == 's') {
                    if (!running) {
                        start = steady_clock::now();
                        running = true;
                        cout << "Stopwatch dimulai!" << endl;
                    } else {
                        cout << "Stopwatch sudah berjalan." << endl;
                    }
                } else if (pilihan == 't') {
                    if (running) {
                        end = steady_clock::now();
                        elapsed += end - start;
                        running = false;
                        cout << "Stopwatch berhenti. Waktu: " << elapsed.count() << " detik" << endl;
                    } else {
                        cout << "Stopwatch belum berjalan." << endl;
                    }
                } else if (pilihan == 'r') {
                    elapsed = duration<double>(0);
                    running = false;
                    cout << "Stopwatch direset." << endl;
                } else if (pilihan == 'q') {
                    cout << "Keluar dari Stopwatch Mode." << endl;
                    break;
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
            }
        }

        // ================= COUNTDOWN TIMER =================
        else if (pilihan == '2') {
            int detik;
            cout << "\n=== Countdown Timer Mode ===" << endl;
            cout << "Masukkan waktu (detik): ";
            cin >> detik;

            for (int i = detik; i >= 0; i--) {
            	system("cls");
                cout << "\rSisa waktu: " << i << " detik" << flush;
                this_thread::sleep_for(seconds(1));
            }

            cout << "\nWaktu habis! ?" << endl;
            Beep(1000, 700); // bunyi beep 700 ms dengan frekuensi 1000 Hz
        }

        // ================= QUIT PROGRAM =================
        else if (pilihan == 'q') {
            cout << "Keluar program utama." << endl;
            break;
        }

        else {
            cout << "Pilihan tidak valid." << endl;
        }
    }

    return 0;
}

