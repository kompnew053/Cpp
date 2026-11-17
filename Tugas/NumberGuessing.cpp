#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int angkarahasia, tebakan, kesempatan = 0;
    cout << "===================================" << endl;
    cout << "         Tebak Angka" << endl;
    cout << "===================================" << endl;
    srand(time(0));
    angkarahasia = rand () % 100 + 1;
    kesempatan = 7;
    bool status = false;

    while (kesempatan > 0){
        cout << "Tebak angka antara 1 sampai 100: ";
        cin >> tebakan;
        if (tebakan == angkarahasia){
            status = true;
            break;
        } else if (tebakan < angkarahasia){
            cout << "Terlalu rendah!\n";
        } else {
            cout << "Terlalu tinggi!\n";
        }
        kesempatan--;
    }
    if (status){
        cout << "\nSelamat! Anda berhasil."<< endl << "Angka rahasia: "<< angkarahasia;
    } else {
        cout << "Kesempatan habis! Anda gagal."<< endl << "Angka rahasia: "<< angkarahasia;
    }
    cout << "\n====================================\n";
    return 0;
}