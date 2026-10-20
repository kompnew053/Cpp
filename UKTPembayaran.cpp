#include <iostream>
using namespace std;

int main() {
    int kelompok;
    char aktif, sudahbayar;

    cout << "========================================\n";
    cout << "Apakah mahasiswa ini aktif?(y/t): ";
    cin >> aktif;

    if (aktif == 'y') {
        cout << "Masukkan kelompok UKT mahasiswa (1/2): ";
        cin >> kelompok;

        if (kelompok == 1 || kelompok == 2) {
            cout << "Apakah mahasiswa ini sudah bayar?(y/t): ";
            cin >> sudahbayar;

            if (sudahbayar == 'y') {
                cout << "AKTIF - LUNAS";
            } else {
                cout << "AKTIF - BELUM LUNAS";
            }
        } else {
            cout << "AKTIF - MENUNGGU PEMBAYARAN";
        }
    } else {
        cout << "STATUS NONAKTIF";
    }
    cout << "\n========================================";
    return 0;
}
