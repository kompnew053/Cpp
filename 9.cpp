#include <iostream>
using namespace std;

int main() {
    int n, durasi, total = 0, hariIdeal = 0, minDurasi = -1;
    cout << "Masukkan jumlah hari: ";
    cin >> n;
    if (n <= 0) { cout << "Jumlah hari harus > 0\n"; return 0; }
    for (int i = 1; i <= n; i++) {
        cout << "Durasi hari ke-" << i << " (menit): ";
        cin >> durasi;
        while (durasi < 0) {
            cout << "  Durasi tidak boleh negatif! Masukkan lagi: ";
            cin >> durasi;
        }
        total += durasi;
        if (durasi >= 60) hariIdeal++;
        if (i == 1 || durasi < minDurasi) minDurasi = durasi;
    }
    cout << "\nTotal Durasi: " << total << " menit" << endl;
    cout << "Rata-rata: " << (double)total / n << " menit/hari" << endl;
    cout << "Hari >= 60 menit: " << hariIdeal << " hari" << endl;
    cout << "Durasi Minimum: " << minDurasi << " menit" << endl;
    return 0;
}
