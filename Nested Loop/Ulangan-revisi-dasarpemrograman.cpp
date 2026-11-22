#include <iostream>
using namespace std;

int main(){
    //program untuk menerima 3 bilangan bulat (a,b,c) kemudian menentukan nilai tebesar menggunakan nested if, jika bukan bilangan bulat,tampilkan pesan
    int a, b, c;
    cout << "Masukkan tiga bilangan bulat \n";
    cout << "a: ";
    cin >> a;
    if (cin.fail()) {
        cout << "Input bukan bilangan bulat!" << endl;
        return 1;
    }
    cout << "b: ";
    cin >> b;
    if (cin.fail()) {
        cout << "Input bukan bilangan bulat!" << endl;
        return 1; 
    }
    cout << "c: ";
    cin >> c;
    if (cin.fail()) {
        cout << "Input bukan bilangan bulat!" << endl;
        return 1; 
    }

    if (a >= b && a >= c) {
        cout << "Nilai terbesar adalah: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Nilai terbesar adalah: " << b << endl;
    } else {
        cout << "Nilai terbesar adalah: " << c << endl;
    }

    return 0;
}
