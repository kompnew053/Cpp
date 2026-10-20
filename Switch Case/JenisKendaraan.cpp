#include <iostream>
using namespace std;

int main(){
    int angka;
    cout << "Jenis Kendaraan\n";
    cout << "Masukkan angka: ";
    cin >> angka;
    switch (angka){
        case 1: cout << "Motor"; break;
        case 2: cout << "Mobil"; break;
        case 3: cout << "Bus"; break;
        case 4: cout << "Truk"; break;
        default: cout <<"Jenis tidak valid";
    }
}
