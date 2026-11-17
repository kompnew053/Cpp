#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float nilai = 0;
    char grade;

    cout << "Menu:" << endl;
    cout << "1. Input Nilai" << endl;
    cout << "2. Lihat Nilai" << endl;
    cout << "3. Tentukan Grade" << endl;
    cout << "4. Keluar" << endl;
    do{
        cout << "\nPilih menu: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai: ";
                cin >> nilai;
                cout << "Nilai berhasil diinput.";
                break;
            case 2:
                cout << "Nilai = " << nilai;
                break;
            case 3:
                cout << "Masukkan nilai: ";
                cin >> nilai;
                if (nilai >= 80)
                    grade = 'A';
                else if (nilai >= 70)
                    grade = 'B';
                else if (nilai >= 60)
                    grade = 'C';
                else if (nilai >= 50)
                    grade = 'D';
                else
                    grade = 'E';
                cout << "Grade = " << grade;
                break;
            case 4:
                cout << "Program selesai.";
                break;
            default:
                cout << "Pilihan tidak valid!";
        }
    }while (pilihan != 4);
    return 0;
}
