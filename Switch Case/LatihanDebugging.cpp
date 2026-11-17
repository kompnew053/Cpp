#include <iostream>
using namespace std;

int main(){
    int menu;
    cout << "Pilih Menu: ";
    cin >> menu;
    switch (menu){
        case 1: cout << "Tambah"; break;
        case 2: cout << "Hapus"; break;
        case 3: cout << "Tampil"; break;
    }
}