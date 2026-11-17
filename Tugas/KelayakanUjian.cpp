#include <iostream>
using namespace std;

int main(){
    float hadir;
    char aktif, tugas, bayar;

    cout << "========================================\n";
    cout << "Apakah mahasiswa ini sudah bayar?(y/t) ";
    cin >> bayar;
    aktif = bayar;
    if (aktif == 'y'){
        cout << "Mahasiswa ini aktif" << endl;
        cout  << "Kehadiran (dalam persen): ";
        cin >> hadir;
        if (hadir >= 75){
            cout << "Apakah tugas sudah lengkap?(y/t) ";
            cin >> tugas;
            if (tugas == 'y'){
                cout << "BOLEH UJIAN";
            } else {
                cout << "TUGAS BELUM LENGKAP";
            }
        } else {
            cout << "KEHADIRAN TIDAK MEMENUHI";
        }
    } 
    else {
        cout << "STATUS TIDAK AKTIF";
    }
    cout << "\n========================================\n";
    return 0;
}