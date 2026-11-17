#include <iostream>
using namespace std;
 
int main() {
    int pilihan;
    double a, b;
 
    do {
        cout << "\n=== KALKULATOR MENU ===" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
 
        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Bilangan pertama: ";
            cin >> a;
            cout << "Bilangan kedua  : ";
            cin >> b;
 
            switch (pilihan) {
                case 1:
                    cout << a << " + " << b << " = " << a + b << endl;
                    break;
                case 2:
                    cout << a << " - " << b << " = " << a - b << endl;
                    break;
                case 3:
                    cout << a << " x " << b << " = " << a * b << endl;
                    break;
                case 4:
                    if (b == 0) {
                        cout << "Error: tidak bisa dibagi nol." << endl;
                    } else {
                        cout << a << " / " << b << " = " << a / b << endl;
                    }
                    break;
            }
        } else if (pilihan != 0) {
            cout << "Pilihan tidak tersedia." << endl;
        }
    } while (pilihan != 0);
 
    cout << "Program selesai." << endl;
    return 0;
}
