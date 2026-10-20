#include <iostream>
using namespace std;

int main()
{
    int durasimandi, durasirapirapi, durasisarapan, durasiperjalanan, jamkelas, menitkelas, totalmenit, totaljam, jam1, totalmenit2, totaljam2, jam2, durasiPersiapan;
    cout << "===============================================\n";
    cout << "| MENGHITUNG WAKTU IDEAL BERANGKAT KE KAMPUS  |\n";
    cout << "|                                             |\n";
    cout << "|Jam kelas: jam ";
    cin >> jamkelas;
    cout << "|Menit kelas: ";
    cin >> menitkelas;
    cout << "|Durasi mandi (dalam menit): ";
    cin >> durasimandi;
    cout << "|Durasi rapirapi (dalam menit): ";
    cin >> durasirapirapi;
    cout << "|Durasi sarapan (dalam menit): ";
    cin >> durasisarapan;
    cout << "|Durasi perjalanan (dalam menit): ";
    cin >> durasiperjalanan;
    durasiPersiapan = durasimandi + durasirapirapi + durasisarapan + durasiperjalanan;
    menitkelas = jamkelas * 60 + menitkelas;
    totalmenit = menitkelas - durasiPersiapan;
    totaljam = totalmenit / 60;
    jam1 = totalmenit % 60;
    totalmenit2 = menitkelas - durasiperjalanan;
    totaljam2 = totalmenit2 / 60;
    jam2 = totalmenit2 % 60;
    cout << "|                                             |" << endl;
    cout << "|Waktu ideal persiapan: jam " << totaljam << ":" << jam1 << "              |\n";
    cout << "|Waktu ideal berangkat: jam " << totaljam2 << ":" << jam2 <<"              |\n";
    cout << "===============================================\n";

    return 0;
}