#include <iostream>
using namespace std;
 
int main() {
    int nilai;
    int jumlahData = 0;
    int totalNilai = 0;
 
    cout << "Masukkan nilai (-1 untuk selesai): ";
    cin >> nilai;
 
    while (nilai != -1) {
        if (nilai >= 0 && nilai <= 100) {
            totalNilai += nilai;
            jumlahData++;
        } else {
            cout << "Nilai harus 0-100, data diabaikan." << endl;
        }
        cout << "Masukkan nilai (-1 untuk selesai): ";
        cin >> nilai;
    }
 
    cout << "Jumlah data : " << jumlahData << endl;
    cout << "Total nilai : " << totalNilai << endl;
    if (jumlahData > 0) {
        double rata = (double) totalNilai / jumlahData;
        cout << "Rata-rata   : " << rata << endl;
    } else {
        cout << "Rata-rata   : belum ada data" << endl;
    }
    return 0;
}
