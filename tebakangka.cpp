#include <iostream>
using namespace std;
 
int main() {
    const int RAHASIA = 37;
    int tebakan;
    int percobaan = 0;
 
    cout << "Tebak angka rahasia (1-100)!" << endl;
    cout << "Tebakan: ";
    cin >> tebakan;
    percobaan++;
 
    while (tebakan != RAHASIA) {
        if (tebakan < RAHASIA) {
            cout << "Terlalu kecil." << endl;
        } else {
            cout << "Terlalu besar." << endl;
        }
        cout << "Tebakan: ";
        cin >> tebakan;
        percobaan++;
    }
 
    cout << "Benar! Angka rahasia adalah " << RAHASIA << "." << endl;
    cout << "Jumlah percobaan: " << percobaan << endl;
    return 0;
}
