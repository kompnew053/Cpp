#include <iostream>
using namespace std;

int main() {
    int menu, submenu;

    cout << "===== MENU UTAMA =====" << endl;
    cout << "1. Akademik" << endl;
    cout << "2. Keuangan" << endl;
    cout << "3. Perpustakaan" << endl;
    cout << "4. Kemahasiswaan" << endl;
    cout << "5. Keluar" << endl;

    cout << "\nPilih Menu: ";
    cin >> menu;

    switch(menu) {

        case 1:
            cout << "\n=== MENU AKADEMIK ===" << endl;
            cout << "1. KRS" << endl;
            cout << "2. Nilai" << endl;
            cout << "3. Jadwal" << endl;
            cout << "4. Transkrip" << endl;
            cout << "Pilih Submenu: ";
            cin >> submenu;

            switch(submenu) {
                case 1:
                    cout << "KRS: Dasar Pemrograman, Basis Data, Kalkulus." << endl;
                    break;

                case 2:
                    cout << "Nilai: A, B+, A-" << endl;
                    break;

                case 3:
                    cout << "Jadwal: Senin dan Rabu pukul 08.00." << endl;
                    break;

                case 4:
                    cout << "Transkrip: IPK Saat Ini 3.80." << endl;
                    break;

                default:
                    cout << "Submenu tidak tersedia." << endl;
            }
            break;

        case 2:
            cout << "Keuangan: Status pembayaran UKT Lunas." << endl;
            break;

        case 3:
            cout << "Perpustakaan: Tidak ada buku yang dipinjam." << endl;
            break;

        case 4:
            cout << "Kemahasiswaan: Pendaftaran organisasi mahasiswa dibuka." << endl;
            break;

        case 5:
            cout << "Terima kasih telah menggunakan program." << endl;
            break;

        default:
            cout << "Menu tidak tersedia." << endl;
    }

    return 0;
}