#include <iostream>
using namespace std;

int main()
{
    float menu, harga, jumlah, subtotal, diskon, total, hargadiskon;
    char tambah;
    cout << "========================\n";
    cout << "Menu" << endl << "1. Nasi Goreng - Rp 10.000" << endl 
         << "2. Mie Ayam - Rp 12.000" << endl 
         << "3. Air Putih - Rp 3.000" << endl 
         << "4. Teh Manis - Rp 5.000" << endl;
    cout << "========================\n";
    do {
        cout << "Pilih Menu (1-4): ";
        cin >> menu;
        if (menu == 1){
            harga = 10000;
        }
        else if (menu == 2){
            harga = 12000;
        }
        else if (menu == 3){
            harga = 3000;
        }
        else if (menu == 4){
            harga = 5000;
        }
        else{
            cout << "Menu tidak tersedia\n";
            harga = 0;
        }
        cout << "Jumlah: ";
        cin >> jumlah;
        subtotal = harga*jumlah;
        cout << "Total menu ini: " << subtotal << endl;
        cout << "======================\n";
        cout << "Tambah menu? (y/t): ";
        cin >> tambah;
        total += subtotal;
    }while (tambah == 'y' || tambah == 'Y');
    
    cout << "=======================\n";
    cout << "Total semua menu: " <<  total << endl;

    diskon = (total*10)/100;
    if (total >= 40000){
    cout << "Total diskon: " << diskon << endl;
    hargadiskon = total-diskon;
    cout << "Harga bayar: " << hargadiskon;
    }
    else{
        cout << "Harga bayar: " << total;
    }

    return 0;
}