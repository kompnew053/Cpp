#include <iostream>
using namespace std;

int main(){
    float  berat, tinggi, hasil;
    string kategori;
    cout << "================================\n";
    cout  << "       Body Mass Index\n";
    cout  << "-------------------------------\n";
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;
    tinggi = tinggi / 100;
    hasil= berat/(tinggi*tinggi);
    cout << "BMI Anda adalah: " << hasil << endl;
    if (hasil < 18.5) {
        kategori = "Underweight";
    }
    else if (hasil >= 18.5 && hasil <= 24.9){
        kategori = "Normal";
    }
    else if (hasil >=25 && hasil <= 29.9){
        kategori = "Overweight";
    }
    else{
        kategori = "Obese";
    }
    cout << "Status: " << kategori << endl;
    cout << "================================\n";
    return 0;
}