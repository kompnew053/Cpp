#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka : ";
    cin >> angka;

    for(int i = 1; i <= 10; i++) {
        cout << angka << " x "<< i << " = " << angka * i << endl;
    }

    return 0;
}
