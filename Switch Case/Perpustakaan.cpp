#include <iostream>
using namespace std;

int main() {
    int pilihan, hari, denda;

    cout << "Menu:\n";
    cout << "1. Pinjam Buku\n";
    cout << "2. Kembalikan Buku\n";
    cout << "3. Cek Denda\n";
    cout << "4. Cek Koleksi\n";
    cout << "5. Keluar\n";
    do{
        cout << "Pilih menu: ";
        cin >> pilihan;
        switch (pilihan) {
        case 1:
            cout << "Anda memilih Pinjam Buku\n";
            break;
        case 2:
            cout << "Anda memilih Kembalikan Buku\n";
            break;
        case 3:
            cout << "Masukkan jumlah hari keterlambatan: ";
            cin >> hari;
            if (hari <= 0){
                denda = 0;}
            else if (hari <= 7){
                denda = hari * 1000;}
            else{
                denda = hari * 2000;
            cout << "Denda yang harus dibayar: Rp" << denda << endl;}
            break;
        case 4:
            cout << "Anda memilih Cek Koleksi\n";
            break;
        case 5:
            cout << "Terima kasih. Program selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    }while (pilihan != 5);
    return 0;
}
