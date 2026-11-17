#include <iostream>
using namespace std;
 
int main() {
    int pilihan;
    int stok = 0;
    int jumlah;
 
    do {
        cout << "\n=== MENU STOK ===" << endl;
        cout << "1. Tambah stok" << endl;
        cout << "2. Lihat stok" << endl;
        cout << "3. Kurangi stok" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
 
        if (pilihan == 1) {
            cout << "Jumlah yang ditambah: ";
            cin >> jumlah;
            if (jumlah > 0) {
                stok += jumlah;
                cout << "Stok bertambah " << jumlah << " unit." << endl;
            } else {
                cout << "Jumlah harus lebih dari 0." << endl;
            }
        } else if (pilihan == 2) {
            cout << "Stok saat ini: " << stok << " unit" << endl;
        } else if (pilihan == 3) {
            cout << "Jumlah yang dikurangi: ";
            cin >> jumlah;
            if (jumlah <= 0) {
                cout << "Jumlah harus lebih dari 0." << endl;
            } else if (jumlah > stok) {
                cout << "Ditolak: stok hanya " << stok << " unit." << endl;
            } else {
                stok -= jumlah;
                cout << "Stok berkurang " << jumlah << " unit." << endl;
            }
        } else if (pilihan != 0) {
            cout << "Pilihan tidak tersedia." << endl;
        }
    } while (pilihan != 0);
 
    cout << "Program selesai. Stok akhir: " << stok << " unit" << endl;
    return 0;
}
