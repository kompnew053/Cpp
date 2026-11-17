#include <iostream>
using namespace std;

int main() {
    int fasilitas, jam, tarif, total;
    cout << "1. Lapangan\n";
    cout << "2. Auditorium\n";
    cout << "3. Laboratorium\n";
    cout << "4. Ruang Seminar\n";
    cout << "Pilih fasilitas: ";
    cin >> fasilitas;
    cout << "Lama penggunaan (jam): ";
    cin >> jam;
    switch (fasilitas) {
        case 1: tarif = 50000; break;
        case 2: tarif = 100000; break;
        case 3: tarif = 75000; break;
        case 4: tarif = 60000; break;
        default:
            cout << "Pilihan tidak valid";
            return 0;
    }
    total = tarif * jam;
    cout << "Total biaya = Rp" << total;
    return 0;
}
