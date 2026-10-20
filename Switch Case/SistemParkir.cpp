#include <iostream>
using namespace std;

int main() {
    int kode, jam;
    double tarif = 0, total;
    cout << "Kode Kendaraan (1=Motor, 2=Mobil, 3=Bus): ";
    cin >> kode;
    cout << "Lama parkir (jam): ";
    cin >> jam;
    switch (kode) {
        case 1:
            tarif = 2000;
            break;
        case 2:
            tarif = 5000;
            break;
        case 3:
            tarif = 10000;
            break;
        default:
            cout << "Kode kendaraan tidak valid";
            return 0;
    }
    total = tarif * jam;
    if (jam > 5) {
        total = total - (0.1 * total);
    }
    cout << "Total tarif parkir: Rp" << total;
    return 0;
}
