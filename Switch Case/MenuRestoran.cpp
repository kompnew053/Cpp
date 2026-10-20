#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, harga, subtotal, diskon = 0, total;
    cout << "Menu:\n";
    cout << "1. Nasi Goreng (Rp15000)\n";
    cout << "2. Mie Ayam    (Rp12000)\n";
    cout << "3. Soto        (Rp13000)\n";
    cout << "4. Es Teh      (Rp5000)\n";
    cout << "Pilih menu: ";
    cin >> pilihan;
    cout << "Jumlah: ";
    cin >> jumlah;
    switch (pilihan) {
        case 1: harga = 15000; break;
        case 2: harga = 12000; break;
        case 3: harga = 13000; break;
        case 4: harga = 5000; break;
        default:
            cout << "Menu tidak tersedia";
            return 0;
    }
    subtotal = harga * jumlah;
    if (subtotal >= 50000)
        diskon = subtotal * 0.1; // 10%
    total = subtotal - diskon;
    cout << "Subtotal : Rp" << subtotal << endl;
    cout << "Diskon   : Rp" << diskon << endl;
    cout << "Total    : Rp" << total << endl;
    return 0;
}
