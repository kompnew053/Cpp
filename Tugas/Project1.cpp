#include <iostream>
using namespace std;

int main(){
    float alas, tinggi, luas;

    cout << "===========================\n";
    cout << "Nama: Gina Fitriani\n";
    cout << "Jurusan: Teknik Informatika\n";
    cout << "===========================\n";
    cout << "MENGHITUNG LUAS SEGITIGA\n";
    cout << "===========================\n";
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "Luas: " << luas << endl;
    cout << "===========================\n";
    return 0;
}

