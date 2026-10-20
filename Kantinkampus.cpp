#include <iostream>
using namespace std;

int main()
{
    cout << "========== KANTIN KAMPUS ===========\n";
    cout << "| Menu:                            |\n";
    cout << "|1. Nasi Goreng          Rp 15.000 |\n";
    cout << "|2. Mie Ayam             Rp 12.000 |\n";
    cout << "|3. Air Mineral          Rp 4.000  |\n";
    cout << "|4. Es Teh               Rp 5.000  |\n";
    cout << "====================================\n";
    cout << endl;

    char lanjut;
    int harga, menu, jumlah, subtotal, total = 0;
    cout << "========= STRUK PEMBAYARAN ========\n";  
    do {
        cout << "|Menu (pilih angka): ";
        cin >> menu;
        if (menu == 1){
            harga = 15000;
        } else if (menu == 2){
            harga = 12000;
        } else if (menu == 3){
            harga = 4000;
        } else if(menu == 4){
            harga = 5000;
        } else {
            cout << "Menu tidak tersedia\n";
            harga = 0;
        }
        cout << "|Jumlah: ";
        cin >> jumlah;
        subtotal = harga * jumlah;
        cout << "|Total: Rp " << subtotal << endl;
        cout << "|Mau tambah menu lain? (y/t): ";
        cin >> lanjut;
        total += subtotal;
    } while (lanjut == 'y' || lanjut == 'Y');
    cout << "======================================\n";
    cout << "========== TOTAL PEMBAYARAN ==========\n";
    cout << "|Total: Rp " << total << "                     |\n";
    cout << "|            Terima Kasih            |\n";
    cout << "======================================\n";
    
    return 0;
}