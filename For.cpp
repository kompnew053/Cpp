#include <iostream>
using namespace std;

int main() {
    int n, p;
    cout << "Masukkan batas: ";
    cin >> n;
    cout << "Masukkan Pengulangan: ";
    cin >> p;
    for (int j = 0; j < p; j++) {
        for (int i=1; i<=n; i+=2){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}