#include <iostream>
using namespace std;

int main(){
    float a1, a2, hasil;
    char o;

    cout << "========================\n";
    cout << "Kalkulator by Gina imutt\n";
    cout << "========================\n";
    cout << "Angka pertama: ";
    cin >> a1;
    cout << "\nOperator (+, -, *, /): ";
    cin >> o;
    cout << "\nAngka kedua: ";
    cin >> a2;
    
    if (o == '+'){
        hasil = a1 + a2;
    }
    else if( o == '-'){
        hasil = a1 - a2;
    }
    else if (o == '*'){
        hasil = a1 * a2;  
    }
    else if (o == '/'){
            hasil = a1 / a2;
    }
    else {
        cout << "Operator tidak valid";
    } 
    cout << "------------------------\n";
    cout << "Hasil: " << hasil << endl;
    return 0;
}