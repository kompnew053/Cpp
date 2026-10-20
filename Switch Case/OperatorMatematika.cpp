#include <iostream>
using namespace std;

int main(){
    float a, b;
    char op;
    cout << "Masukkan angka pertama: "; cin >> a;
    cout << "Operator: ";cin >> op;
    cout << "Masukkan angka kedua: ";cin >> b;

    switch (op){
        case '+': cout << "Hasil: " << a + b; break;
        case '-': cout << "Hasil: " << a - b; break;
        case '*': cout << "Hasil: " << a * b; break;
        case '/':
            if (b != 0){
            cout << "Hasil: " << a / b; break;}
            else{
            cout << "Tidak dapat membagi dengan nol";}
            break;
        default:
            cout << "Operator tidak valid";
    }
    return 0;
}
