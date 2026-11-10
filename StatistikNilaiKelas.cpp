#include <iostream>
using namespace std;

int main() {
    int n, nilai;
    int total = 0;
    int tertinggi, terendah;
    int lulus = 0;
    cout << "Jumlah mahasiswa : ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << "Nilai ke-" << i << " : ";
        cin >> nilai;
        total += nilai;
        if(i == 1) {
            tertinggi = nilai;
            terendah = nilai;
        }
        if(nilai > tertinggi)
            tertinggi = nilai;
        if(nilai < terendah)
            terendah = nilai;
        if(nilai >= 60)
            lulus++;
    }
    double rata = (double) total / n;
    cout << "\nTotal = " << total << endl;
    cout << "Rata-rata = " << rata << endl;
    cout << "Tertinggi = " << tertinggi << endl;
    cout << "Terendah = " << terendah << endl;
    cout << "Jumlah lulus = " << lulus << endl;
    return 0;
}