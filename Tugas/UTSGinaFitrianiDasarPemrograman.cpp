#include <iostream>
using namespace std;

int main() {
    string pin, pass = "45578";
    double saldo = 100000, nominal;
    char lanjut;

    do {
        cout << "Masukkan PIN Anda: ";
        cin >> pin;
        if (pin == pass) {
            int pilihan;
            do {
                cout << "\n====== MENU ATM ======" << endl;
                cout << "1. Cek Saldo" << endl;
                cout << "2. Setor Tunai" << endl;
                cout << "3. Tarik Tunai" << endl;
                cout << "4. Transfer" << endl;
                cout << "5. Selesai" << endl;
                cout << "\nPilihan: ";
                cin >> pilihan;
                switch (pilihan) {
                    case 1:
                        cout << "Saldo Anda: Rp" << saldo << endl;
                        break;
                    case 2:
                        cout << "Masukkan nominal setoran: Rp";
                        cin >> nominal;
                        if (nominal > 0) {
                            saldo += nominal;
                            cout << "Setor berhasil.\nSaldo sekarang: Rp" << saldo << endl;
                        } else {
                            cout << "Nominal harus positif!" << endl;
                        }
                        break;
                    case 3:
                        cout << "Masukkan nominal penarikan: Rp";
                        cin >> nominal;
                        if (nominal > 0 && nominal <= saldo) {
                            saldo -= nominal;
                            cout << "Tarik tunai berhasil.\nSaldo sekarang: Rp" << saldo << endl;
                        } else {
                            cout << "Saldo tidak mencukupi atau nominal tidak valid!" << endl;
                        }
                        break;
                    case 4:
                        cout << "Masukkan nominal transfer: Rp";
                        cin >> nominal;
                        if (nominal > 0 && nominal <= saldo) {
                            saldo -= nominal;
                            cout << "Transfer berhasil.\nSaldo sekarang: Rp" << saldo << endl;
                        } else {
                            cout << "Saldo tidak mencukupi atau nominal tidak valid!" << endl;
                        }
                        break;
                    case 5:
                        cout << "Terima kasih." << endl;
                        return 0;
                    default:
                        cout << "Pilihan tidak valid!" << endl;
                }
                if (pilihan != 5) {
                    cout << "\nLanjut transaksi? (y/t): ";
                    cin >> lanjut;
                }
            } while (pilihan != 5 && (lanjut == 'y' || lanjut == 'Y'));
            cout << "\nMasukkan PIN lagi? (y/t): ";
            cin >> lanjut;
            cout << "==========";
            
            if (lanjut == 'y' || lanjut == 'Y') {
                cout << "Silakan masukkan PIN lagi." << endl;
            } else {
                cout << "Terima kasih." << endl;
                break;
            }
        } else {
            cout << "PIN Anda salah!" << endl;
            cout << "Masukkan PIN lagi? (y/t): ";
            cin >> lanjut;
        }
    } while (lanjut == 'y' || lanjut == 'Y');
    return 0;
}