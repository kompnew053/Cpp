#include <iostream>
using namespace std;

int main() {
    int awal, akhir;
    int genap = 0;
    int ganjil = 0;
    int total = 0;
    cout << "Batas awal : ";
    cin >> awal;
    cout << "Batas akhir : ";
    cin >> akhir;
    if(awal > akhir) {
        cout << "Rentang tidak valid";
    }
    else {
        for(int i = awal; i <= akhir; i++) {
            cout << i << " ";
            total += i;
            if(i % 2 == 0)
                genap++;
            else
                ganjil++;
        }
        cout << "\nJumlah genap : " << genap;
        cout << "\nJumlah ganjil : " << ganjil;
        cout << "\nTotal : " << total;
    }
    return 0;
}
