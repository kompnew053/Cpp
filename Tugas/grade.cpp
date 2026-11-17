#include <iostream>
using namespace std;

int main()
{
    float tm, tt, UTS, UAS, NA;
    cout << "Masukkan nilai Tugas Mandiri: ";
    do {
    cin >> tm;
    if (tm < 0 || tm > 100){
        cout << "Nilai Tugas Mandiri harus antara 0-100. Nilai Tugas Mandiri: ";
    } } while (tm < 0 || tm > 100);

    cout << "Masukkan nilai Tugas Terstruktur: ";
    do {
    cin >> tt;
    if (tt < 0 || tt > 100){
        cout << "Nilai Tugas Terstruktur harus antara 0-100. Nilai Tugas Terstruktur: ";
    } } while (tt < 0 || tt > 100);

    cout << "Masukkan nilai UTS: ";
    do {
    cin >> UTS;
    if (UTS < 0 || UTS > 100){
        cout << "Nilai UTS harus antara 0-100. Nilai UTS: ";
    } } while (UTS < 0 || UTS > 100);

    cout << "Masukkan nilai UAS: ";
    do {
    cin >> UAS;
    if (UAS < 0 || UAS > 100){
        cout << "Nilai UAS harus antara 0-100. Nilai UAS: ";
    } } while (UAS < 0 || UAS > 100);

    NA = (tm * 0.2) + (tt * 0.2) + (UTS * 0.2) + (UAS * 0.4);
    cout << "Nilai Akhir: " << NA << endl;

    if (NA < 50){
        cout << "Grade E";
    } else if (NA < 60){
        cout << "Grade D";
    } else if (NA  < 70){
        cout << "Grade C";
    } else if (NA < 80){
        cout << "Grade B";
    } else {
        cout << "Grade A";
    }
    return 0;
}