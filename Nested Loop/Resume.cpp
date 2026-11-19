#include <iostream>
using namespace std;

int main() {

//tabel angka
    for (int i= 1; i <= 5; i++) {
        for (int j =1; j <= 5; j++) {
            cout << i*j << "\t";
        }
            cout << endl;
    }
cout << endl;
// bintang segitiga
    for (int baris = 1; baris <= 5; baris++) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "* ";
        }
            cout << endl;
    }

cout << endl;
// papan catur, modulo
    for (int baris = 1; baris <= 8; baris++) {
        for (int kolom = 1; kolom <= 8; kolom++) {
            if ((baris + kolom) % 2 == 0) {
                cout << "X ";
            } else {
                cout << "O ";
            }
        }
        cout << endl;
    }

cout << endl;
// olah nilai
    const int M = 3;
    const int T = 4;

    int nilai [3] [4] = {
        {80, 85, 90, 75},
        {70, 75, 80, 85},
        {90, 95, 85, 90}
    };
    for (int m = 0; m < M; m++) {
        int total = 0;
        for (int t = 0; t < T; t++) {
            total += nilai[m] [t];
        } 
        double rata = static_cast<double>(total) / T;
        cout << "Mahasiswa " << m + 1
        << " - Rata-rata: " << rata << endl;
    }

cout << endl;
//nested while
    int baris = 1;
    while (baris <= 3) {
        int kolom = 1;
        while (kolom <= 4) {
            cout << "* ";
            kolom++;
        }
        cout << endl;
        baris++;
    }

cout << endl;
// kombinasi for dan while
for (int baris = 1; baris <= 3; baris++) {
    int kolom = 1;
    while (kolom <= baris) {
        cout << kolom << " ";
        kolom++;
    }
    cout << endl;
}

cout << endl;
//jadwal kuliah
    string hari[5] = {
    "Senin", "Selasa", "Rabu", "Kamis", "Jumat"
    };
    string slot[3] = {"08.00", "10.00", "13.00"};
    for (int i = 0; i < 5; i++) {
    cout << hari[i] << endl;
    for (int j = 0; j < 3; j++) {
    cout << " Slot " << j + 1
    << " - " << slot[j] << endl;
    }
    }

    cout << endl;
    cout << "=============================\n";
    //latihan
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
            }
        cout << endl;
        }

//segtiga rata kanan
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int baris = 1; baris <= 4; baris++) {
        for (int kolom = 1; kolom <= 7; kolom++) {
            cout << "(" << baris << "," << kolom << ") ";
            }
            cout << endl;
    }

    for (int baris = 1; baris <= 6; baris++) {
        for (int kolom = 1; kolom <= 8; kolom++) {
            cout << "* ";
        }
            cout << endl;
    }

    for (int baris = 1; baris <= 5; baris++) {
        for (int kolom = 1; kolom <= 6 - baris; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }



    for (int baris = 1; baris <= 8; baris++) {
        for (int kolom = 1; kolom <= 8; kolom++) {
            if ((baris + kolom) % 2 == 0) {
                cout << "X ";
                } else {
                cout << "O ";
                }   
            }
            cout << endl;
        }


    int jumlah = 0;
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 2; j++) {
            jumlah++;
            }
        }
        cout << jumlah;

cout << endl;
    for (int baris = 5; baris >= 1; baris--) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }




    int n;
    cout << "Masukkan batas tabel (n): ";
    cin >> n;
    while (n <= 0) {
        cout << "Input harus lebih besar dari 0. Ulangi: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }



    return 0;
}
