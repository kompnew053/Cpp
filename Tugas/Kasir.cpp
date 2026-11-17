#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<float> daftarharga;
    float hargabarang, totalbelanja, diskon, totalakhir;
    hargabarang = 0;
    totalbelanja = 0;
    diskon = 0;
    totalakhir = 0;
    cout << "===============================\n";
    cout << "      Kasir by Gina imutt\n";
    cout << "===============================\n";
    cout << ">>>>Ketik '0' untuk selesai<<<<\n";
    while (true){
        cout << "Masukkan harga barang Rp ";
        cin >> hargabarang;
        if (hargabarang < 0){
            cout << "Harga tidak valid.";
        }
        else if (hargabarang == 0){
            break;
        }
        daftarharga.push_back(hargabarang);
        totalbelanja += hargabarang;
    }
    if (daftarharga.empty()){
        cout << "Tidak ada barang yang dibeli.";
        return 0;
    }
    if (totalbelanja > 100000){
        diskon = totalbelanja*0.1;
    }
    totalakhir = totalbelanja - diskon;

    cout << "\n\n======================\n";
    cout << "   Struk Pembayaran\n";
    cout << "======================\n";
    for (int i = 0; i < daftarharga.size(); i++){
        cout << "Barang ke-" << (i+1) << " : Rp " << daftarharga[i] << endl;
    }
    cout << "----------------------\n";
    cout << "Harga Awal      : Rp " << totalbelanja << endl;
    cout << "Potongan Diskon : Rp " << diskon << endl;
    cout << "Harga Akhir     : Rp " << totalakhir;
    cout << "\n=====================\n";
    return 0;
}