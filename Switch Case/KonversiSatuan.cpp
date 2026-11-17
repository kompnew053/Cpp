#include <iostream>
using namespace std;

int main(){
    float angka; 
    int kv;
    cout << "======================\n";
    cout << "Konversi yang Tersedia\n"
            "1. Meter->Kilometer\n"
            "2. Kilometer->Meter\n"
            "3. Meter->Centimeter\n"
            "4. Centimeter->Meter\n";
    cout << "======================\n";    
    cout << "Masukkan Angka: ";
    cin >> angka;
    cout << "Pilih Konversi: ";
    cin >> kv;
    cout << "----------------------\n";
    switch (kv){
        case 1:
            cout << "Hasil konversi: " << angka/1000 << " km";
            break;
        case 2:
            cout << "Hasil Konversi: " << angka*1000 << " m";
            break;
        case 3:
            cout << "Hasil Konversi: " << angka*100 << " cm";
            break;
        case 4:
            cout << "Hasil Konversi: " << angka/100 << " m";
            break;
        default:
            cout << "Konversi tidak tersedia";
            break;
    }   
    cout << "\n======================\n";
    return 0;
}