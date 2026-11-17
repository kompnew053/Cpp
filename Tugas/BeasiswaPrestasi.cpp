#include <iostream>
using namespace std;

int main(){
    float ipk;
    char aktif, prestasiAkademik, prestasiNonAkademik;

    cout << "========================================\n";
    cout << "Apakah mahasiswa ini aktif?(y/t): ";
    cin >> aktif;
    cout << "IPK mahasiswa: ";
    cin >> ipk;
    if (aktif == 'y' && ipk >= 3.5){
        cout << "Apakah memiliki prestasi akademik?(y/t): ";
        cin >> prestasiAkademik;
        cout << "Apakah memiliki prestasi non-akademik?(y/t): ";
        cin >> prestasiNonAkademik;
        if (prestasiAkademik == 'y' || prestasiNonAkademik == 'y'){
            cout << "LOLOS SELEKSI AWAL";
        } else {
            cout << "PRESTASI BELUM MEMENUHI";
        }
    } else {
        cout << "SYARAT DASAR TIDAK MEMENUHI";
    }
    cout << "\n========================================\n";
    return 0;
}