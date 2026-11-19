#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m[3][3] = {
        {10, 20, 30},
        {15, 25, 35},
        {5, 12, 18}
    };
    int jumlah = 0;
    for (int i = 0; i < 3; i++) {
        int jumlahBaris = 0;
        for (int j = 0; j < 3; j++) {
            cout << setw(4) << m[i][j];
            jumlahBaris += m[i][j];
        }
        cout << "  | jumlah baris = " << jumlahBaris << endl;
        jumlah += jumlahBaris;
    }
    cout << "Jumlah seluruh elemen = " << jumlah << endl;

//
cout << endl;
    const int M = 4;
    const int K = 3;
    int nilai[M][K] = {
        {80, 75, 90},
        {85, 80, 70},
        {90, 95, 100},
        {65, 70, 75}
    };
    int totalKelas = 0;
    cout << fixed << setprecision(2);
    for (int m = 0; m < M; m++) {
        int total = 0;
        for (int k = 0; k < K; k++) {
            total += nilai[m][k];
        }
        totalKelas += total;
        cout << "Mahasiswa " << m + 1 << " - Rata-rata: "
            << static_cast<double>(total) / K << endl;
    }
    cout << "Rata-rata kelas: "
         << static_cast<double>(totalKelas) / (M * K) << endl;

//
    string nama[5] = {"Fitri", "Galih", "Hana", "Ilham", "Joko"};
    string komp[3] = {"Tugas", "UTS", "UAS"};
    int nilai[5][3] = {
        {90, 85, 88},
        {75, 70, 80},
        {95, 92, 98},
        {60, 65, 70},
        {82, 78, 85}
    };
    double rata[5];
    int idxMax = 0;
    cout << left << setw(8) << "Nama";
    for (int k = 0; k < 3; k++) {
        cout << setw(7) << komp[k];
    }
    cout << setw(7) << "Total" << "Rata-rata" << endl;
    cout << fixed << setprecision(2);
    for (int m = 0; m < 5; m++) {
        int total = 0;
        cout << left << setw(8) << nama[m];
        for (int k = 0; k < 3; k++) {
            cout << setw(7) << nilai[m][k];
            total += nilai[m][k];
        }
        rata[m] = total / 3.0;
        cout << setw(7) << total << rata[m] << endl;
        if (rata[m] > rata[idxMax]) {
            idxMax = m;
        }
    }
    cout << endl;
    for (int k = 0; k < 3; k++) {
        int jumlah = 0;
        for (int m = 0; m < 5; m++) {
            jumlah += nilai[m][k];
        }
        cout << "Rata-rata " << komp[k] << " : " << jumlah / 5.0 << endl;
    }
    cout << endl << "Rata-rata tertinggi: " << rata[idxMax]
        << " (" << nama[idxMax] << ")" << endl;


cout << endl;
//beragam pola bintang
    int n = 4;

    cout << "Segitiga Siku-siku" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << "Segitiga Terbalik" << endl;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s < i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << "Persegi Bintang" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << "Piramida" << endl;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout<< endl;
//
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if ((i + j) % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }

cout << endl;
//angka 
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(4) << i + j;
        }
        cout << endl;
    }


cout << endl;
// bintang belah ketupat
    int n;
    cout << "Masukkan n: ";
    cin >> n;
    while (n <= 0) {
        cout << "n harus lebih dari 0. Ulangi: ";
        cin >> n;
    }
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int b = 1; b <= 2 * i - 1; b++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        for (int b = 1; b <= 2 * i - 1; b++) {
            cout << "*";
        }
        cout << endl;
    }


cout << endl;
// tabel perkalian 10
    cout << "    |";
    for (int j = 1; j <= 10; j++) {
        cout << setw(4) << j;
    }
    cout << endl << "----+" << string(40, '-') << endl;
    for (int i = 1; i <= 10; i++) {
        cout << setw(3) << i << " |";
        for (int j = 1; j <= 10; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }


cout << endl;
//
    int m, n;
    int nilai[20][20];
 
    cout << "Jumlah mahasiswa (m)   : ";
    cin >> m;
    cout << "Jumlah mata kuliah (n) : ";
    cin >> n;
 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nilai mhs " << i + 1 << " mk " << j + 1 << ": ";
            cin >> nilai[i][j];
        }
    }
 
    cout << fixed << setprecision(2) << endl;
    for (int i = 0; i < m; i++) {
        double total = 0;
        for (int j = 0; j < n; j++) {
            total += nilai[i][j];
        }
        cout << "Rata-rata mahasiswa " << i + 1
             << " = " << total / n << endl;
    }



cout << endl;
//Jadwal Kuliah 5 Hari × 3 Jam
    string hari[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
    string jam[3] = {"08.00", "10.00", "13.00"};
    string jadwal[5][3] = {
        {"Dasar Prog", "Peng. Info", "Mat. Dasar"},
        {"Comp. Thinking", "B. Inggris", "Prak. Prog"},
        {"Mat. Dasar", "Dasar Prog", "Pancasila"},
        {"Peng. Info", "Prak. Prog", "B. Inggris"},
        {"Agama", "Comp. Thinking", "Dasar Prog"}
    };
    cout << left << setw(9) << "Hari";
    for (int j = 0; j < 3; j++) {
        cout << setw(16) << jam[j];
    }
    cout << endl << string(57, '-') << endl;
    for (int i = 0; i < 5; i++) {
        cout << setw(9) << hari[i];
        for (int j = 0; j < 3; j++) {
            cout << setw(16) << jadwal[i][j];
        }
        cout << endl;
    }


    return 0;
}
