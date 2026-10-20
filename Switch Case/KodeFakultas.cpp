#include <iostream>
using namespace std;

int main(){
    char kode;
    cout << "Pakai Kapital\n";
    cout << "Input kode fakultas: ";
    cin >> kode;
    switch (kode){
        case 'A': cout << "Saintek"; break;
        case 'B': cout << "Dakom"; break;
        case 'C': cout << "Soshum"; break;
        case 'D': cout << "Tarbiyah"; break;
        default: cout << "Kode tidak valid";
    }
}
