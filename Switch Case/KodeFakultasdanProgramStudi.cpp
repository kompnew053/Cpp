#include <iostream>
using namespace std;

int main() {
    int fakultas, prodi;
    cout << "Fakultas:\n";
    cout << "1. Teknik\n";
    cout << "2. Ekonomi\n";
    cout << "Pilih fakultas: ";
    cin >> fakultas;
    switch (fakultas) {
        case 1:
            cout << "\nProgram Studi Teknik:\n";
            cout << "1. Teknik Informatika\n";
            cout << "2. Sistem Informasi\n";
            cout << "Pilih prodi: ";
            cin >> prodi;
            switch (prodi) {
                case 1:
                    cout << "Anda memilih Teknik Informatika";
                    break;
                case 2:
                    cout << "Anda memilih Sistem Informasi";
                    break;
                default:
                    cout << "Kode prodi tidak valid";
            }
            break;
        case 2:
            cout << "\nProgram Studi Ekonomi:\n";
            cout << "1. Manajemen\n";
            cout << "2. Akuntansi\n";
            cout << "Pilih prodi: ";
            cin >> prodi;
            switch (prodi) {
                case 1:
                    cout << "Anda memilih Manajemen";
                    break;
                case 2:
                    cout << "Anda memilih Akuntansi";
                    break;
                default:
                    cout << "Kode prodi tidak valid";
            }
            break;
        default:
            cout << "Kode fakultas tidak valid";
    }
    return 0;
}