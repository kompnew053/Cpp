#include <iostream>
using namespace std;

int main() {
int angka;
int total = 0;
int banyakData = 0;

cout << "Masukkan angka (0 untuk selesai): ";
cin >> angka;

while (angka != 0) {
if (angka > 0) {
total += angka;
banyakData++;
}
cout << "Masukkan angka (0 untuk selesai): ";
cin >> angka;
}
cout << "Jumlah data positif = " << banyakData << endl;
cout << "Total = " << total << endl;
return 0;
}