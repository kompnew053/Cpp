#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double saldo = 10000, nominal;
    cout << "Saldo awal Rp" << saldo << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Setor Tunai" << endl;
    cout << "3. Tarik Tunai" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. Keluar" << endl;
    do{
        cout << "\nPilihan: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "Saldo Anda: Rp" << saldo;
                break;
            case 2:
                cout << "Masukkan nominal setoran: Rp";
                cin >> nominal;
                if (nominal > 0) {
                    saldo += nominal;
                    cout << "Setor berhasil.\nSaldo sekarang: Rp" << saldo;
                } else {
                    cout << "Nominal harus positif!";
                }
                break;
            case 3:
                cout << "Masukkan nominal penarikan: Rp";
                cin >> nominal;
                if (nominal > 0 && nominal <= saldo) {
                    saldo -= nominal;
                    cout << "Tarik tunai berhasil.\nSaldo sekarang: Rp" << saldo;
                } else {
                    cout << "Saldo tidak mencukupi atau nominal tidak valid!";
                }
                break;
            case 4:
                cout << "Masukkan nominal transfer: Rp";
                cin >> nominal;
                if (nominal > 0 && nominal <= saldo) {
                    saldo -= nominal;
                    cout << "Transfer berhasil.\nSaldo sekarang: Rp" << saldo;
                } else {
                    cout << "Saldo tidak mencukupi atau nominal tidak valid!";
                }
                break;
            case 5:
                cout << "Terima kasih.";
                break;
            default:
                cout << "Pilihan tidak valid!";
        }
    }while(pilihan!=5);
    return 0;
}
