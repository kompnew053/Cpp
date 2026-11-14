#include <iostream>
using namespace std;
 
int main() {
    long long target, saldo = 0, setoran;
    int banyakSetoran = 0;
 
    cout << "Masukkan target tabungan (Rp): ";
    cin >> target;
 
    while (saldo < target) {
        cout << "Setoran ke-" << banyakSetoran + 1 << " (Rp): ";
        cin >> setoran;
        if (setoran > 0) {
            saldo = saldo + setoran;
            banyakSetoran++;
            cout << "Saldo saat ini: Rp" << saldo << endl;
        } else {
            cout << "Setoran harus lebih besar dari 0." << endl;
        }
    }
 
    cout << "Target tercapai!" << endl;
    cout << "Saldo akhir    : Rp" << saldo << endl;
    cout << "Jumlah setoran : " << banyakSetoran << " kali" << endl;
    return 0;
}
