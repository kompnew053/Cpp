#include <iostream>
using namespace std;

int main ()
{
    float jenis, durasi, harga, tarif;
    
    cout << "Jenis Kendaraan:" << endl << "1. Motor" << endl << "2. Mobil\n";
    cout << "Pilih (1/2): ";
    cin >> jenis;
    if (jenis != 1 && jenis != 2) {
        cout << "Jenis kendaraan tidak valid.";
        return 0;
    }
    cout << "Masukkan durasi: ";
    cin >> durasi;
    harga = (durasi-1)*1000;

    if (jenis == 1) {
        if (durasi == 1){
            tarif = 2000;
        }
        else {
            tarif = 2000+harga;
        }
    }
    else if (jenis == 2) {
        if (durasi == 1) {
            tarif = 4000;
        }
        else {
            tarif = 4000+harga;
        }
    }
    cout << "Tarif: " << tarif;
    return 0;
}