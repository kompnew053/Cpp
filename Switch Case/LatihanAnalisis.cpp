#include <iostream>
using namespace std;

int main() {
    int pilihan;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "Akademik";
            break;
        case 2:
            cout << "Keuangan";
            break;
        default:
            cout << "Tidak valid";
    }
    return 0;
}