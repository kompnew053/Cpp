#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i < 3); 
cout << endl;

    int j;
    cout << "Masukkan nilai awal: ";
    cin >> j;
    do {
        if (j % 2 == 0) {
            cout << j << " ";
            j--;
        }
        else {
            j--;
        }
    } while (j > 0); 
    return 0;
}