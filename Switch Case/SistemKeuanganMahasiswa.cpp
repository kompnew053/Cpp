#include <iostream>
using namespace std;

int main()
{
    int menu;
    cout << "=====================\n";
    cout << "Menu Sistem Keuangan: \n";
    cout << "1. Cek UKT\n"
            "2. Cek Tagihan\n"
            "3. Pembayaran\n"
            "4. Riwayat Pembayaran\n"
            "5. Keluar\n";
    do{
        cout << "---------------------\n";
        cout << "Pilih Menu (angka): ";
        cin >> menu;
        cout << "=====================\n";
        switch (menu)
        {
        case 1:
            cout << "UKT Anda\n";
            cout << "UKT gol V\n";
            break;
        case 2:
            cout << "Tagihan Anda\n";
            cout << "Semester 1: Selesai\n";
            break;
        case 3:
            cout << "Pembayaran\n";
            cout << "Tersedia bank:\n" "1. Tunai\n" "2. Transfer\n" "3. Virtual Account\n";
            break;
        case 4:
            cout << "Riwayat\n";
            cout << "Semester 1: Juli 2026\n";
            break;
        case 5:
            cout << "Terima kasih telah menggunakan layanan kami\n";
            break;
        default:
            cout << "Menu tidak ada\n";
            break;
        }
    }while(menu != 5);
    return 0;
}