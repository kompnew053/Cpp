#include <iostream>
using namespace std;

int main() {
    int n;
    int jumlah = 0;
    int total = 0;
    cout << "Masukkan n : ";
    cin >> n;
    cout << "Bilangan yang habis dibagi 3 atau 5 : ";
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            cout << i << " ";
            jumlah++;
            total += i;
        }
    }
    cout << "\nJumlah bilangan = " << jumlah;
    cout << "\nTotal nilai = " << total;
    return 0;
}
