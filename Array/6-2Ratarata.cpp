#include <iostream>

using namespace std;

    int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int nilai[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }
    double rata = static_cast<double>(total) / n;
    cout << "Rata-rata = " << rata << endl;
    return 0;
}