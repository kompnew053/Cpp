#include <iostream>
using namespace std;

int main() {
    int menu, subMenu;
    string nama, nim, prodi;
    float nilai;
    do {
        cout << "\n===== SISTEM AKADEMIK =====" << endl;
        cout << "1. Data Mahasiswa" << endl;
        cout << "2. KRS" << endl;
        cout << "3. Nilai" << endl;
        cout << "4. Jadwal" << endl;
        cout << "5. Keuangan" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> menu;
        switch(menu) {
            case 1:
                cout << "\n=== DATA MAHASISWA ===" << endl;
                cin.ignore();
                cout << "Nama  : ";
                getline(cin, nama);
                cout << "NIM   : ";
                getline(cin, nim);
                cout << "Prodi : ";
                getline(cin, prodi);
                cout << "\nData Mahasiswa" << endl;
                cout << "Nama  : " << nama << endl;
                cout << "NIM   : " << nim << endl;
                cout << "Prodi : " << prodi << endl;
                break;
            case 2:
                cout << "\n=== MENU KRS ===" << endl;
                cout << "1. Tambah Mata Kuliah" << endl;
                cout << "2. Lihat KRS" << endl;
                cout << "Pilih submenu: ";
                cin >> subMenu;
                switch(subMenu) {
                    case 1:
                        cout << "Mata kuliah berhasil ditambahkan." << endl;
                        break;
                    case 2:
                        cout << "Daftar KRS:" << endl;
                        cout << "- Algoritma Pemrograman" << endl;
                        cout << "- Basis Data" << endl;
                        cout << "- Pemrograman Web" << endl;
                        break;
                    default:
                        cout << "Submenu tidak tersedia!" << endl;
                }
                break;
            case 3:
                cout << "\n=== NILAI ===" << endl;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                cout << "Nilai yang diinput: " << nilai << endl;
                break;
            case 4:
                cout << "\n=== JADWAL KULIAH ===" << endl;
                cout << "Senin : Algoritma Pemrograman" << endl;
                cout << "Rabu  : Basis Data" << endl;
                cout << "Jumat : Pemrograman Web" << endl;
                break;
            case 5:
                cout << "\n=== KEUANGAN ===" << endl;
                cout << "Status Pembayaran: LUNAS" << endl;
                break;
            case 6:
                cout << "\nTerima kasih. Program selesai." << endl;
                break;
            default:
                cout << "Menu tidak tersedia!" << endl;
        }
    } while(menu != 6);
    return 0;
}