#include <iostream>
using namespace std;

int main() {
    int jenis, jam, tarifPerJam, total;
    cout << "Pilih Jenis: ";
    cin >> jenis;
    cout << "Masukkan durasi: ";
    cin >> jam;
    switch (jenis) {
        case 1:
            tarifPerJam = 2000;
            break;
        case 2:
            tarifPerJam = 5000;
            break;
        case 3:
            tarifPerJam = 10000;
            break;
        default:
            cout << "Jenis tidak valid";
            return 0;
    }
    total = tarifPerJam * jam;
    cout << "Total tarif = " << total;
    return 0;
}