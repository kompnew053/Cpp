#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    string password;
    char pilihan;
    cout << "Ingin membuat password sendiri? (y/t): ";
    cin >> pilihan;
    if (pilihan == 'Y' || pilihan == 'y'){
        cout << "==================================\n";
        cout << "Password harus minimal 8 character\n";
        cout << "Masukkan Password: ";
        cin >> password;
        if (password.size() < 8){
            cout << "Password tidak aman!";
        }
        else if (password.size() == 8){
            cout << "Password aman.";
        }
        else if (password.size() > 8){
            cout << "Password sangat aman.";
        }
        cout << "\n==================================\n";
    }
    else{
            string kumpulankarakter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz" "0123456789" "!@#$%^&*()_+-=<>?/{}[].,";
            int panjangkarakter = kumpulankarakter.length();
            int panjangpassword = 8;
            string passwordhasil = "";

            for (int i = 0; i < panjangpassword; i++){
                int indeksacak = rand() % panjangkarakter;
                passwordhasil += kumpulankarakter[indeksacak];
            }
        cout << "============================\n";
        cout << "   Mesin Pembuat Password\n";
        cout << "============================\n";
        cout << "Passwor Anda: " << passwordhasil << endl;
        }
    return 0;
}