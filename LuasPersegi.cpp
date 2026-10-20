#include <iostream>
using namespace std;

int main() {
    float panjang, lebar, luas;

    cout << "Masukkan Panjang: " << endl;
    cin >> panjang;

    cout << "Masukkan Lebar: " << endl;
    cin >> lebar;

    luas = panjang * lebar;
    cout << "Luas persegi pajang= " << luas << endl;
    
    return 0;
}