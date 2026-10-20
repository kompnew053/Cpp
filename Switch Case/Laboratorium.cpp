#include <iostream>
using namespace std;

int main() {
    int kode;

    cout << "Pilihan:" << endl;
    cout << "1. Peminjaman Lab" << endl;
    cout << "2. Peminjaman Komputer" << endl;
    cout << "3. Instalasi Software" << endl;
    cout << "4. Reset Password" << endl;
    cout << "5. Keluar" << endl;
    do{
        cout << "\nMasukkan kode layanan: ";
        cin >> kode;
        switch(kode) {
            case 1:
                cout << "Prosedur Peminjaman Lab:\n";
                cout << "Isi formulir, ajukan jadwal, dan tunggu persetujuan.";
                break;
            case 2:
                cout << "Prosedur Peminjaman Komputer:\n";
                cout << "Daftar peminjaman, ambil komputer, lalu kembalikan sesuai jadwal.";
                break;
            case 3:
                cout << "Prosedur Instalasi Software:\n";
                cout << "Ajukan permintaan instalasi dan serahkan perangkat kepada teknisi.";
                break;
            case 4:
                cout << "Prosedur Reset Password:\n";
                cout << "Verifikasi identitas dan lakukan penggantian password.";
                break;
            case 5:
                cout << "Terima kasih. Program selesai.";
                break;
            default:
                cout << "Kode layanan tidak valid.";
        }
    }while(kode!=5);
    return 0;
}
