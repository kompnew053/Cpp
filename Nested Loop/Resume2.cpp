#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int jumlah = 0;

    cout << "Isi matriks:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(3) << matriks[i][j];
            jumlah += matriks[i][j];
        }
        cout << endl;
    }
    cout << "Jumlah seluruh elemen = " << jumlah << endl;

//rata-rata kelas
    const int M = 4;
    const int K = 3;
    int nilai[M][K] = {
        {85, 90, 80},
        {70, 75, 65},
        {95, 90, 100},
        {60, 70, 80}
    };
    cout << fixed << setprecision(2);
    for (int m = 0; m < M; m++) {
        int total = 0;
        for (int k = 0; k < K; k++) {
            total += nilai[m][k];
        }
        double rata = static_cast<double>(total) / K;
        cout << "Mahasiswa " << m + 1
            << " - Rata-rata: " << rata << endl;
    }
cout << endl;


//bintang piramida
    int n = 5;
    for (int baris = 1; baris <= n; baris++) {
        for (int s = 1; s <= n - baris; s++) {
            cout << " ";       
        }
        for (int b = 1; b <= 2 * baris - 1; b++) {
            cout << "*";          
        }
        cout << endl;
    }

    cout << endl;
//jadwal kuliah
    string hari[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
    string slot[3] = {"08.00", "10.00", "13.00"};
    string matkul[5][3] = {
        {"Dasar Prog", "Peng. Informatika", "Mat. Dasar"},
        {"Comp. Thinking", "B. Inggris", "Prak. Prog"},
        {"Mat. Dasar", "Dasar Prog", "Pancasila"},
        {"Peng. Informatika", "Prak. Prog", "B. Inggris"},
        {"Agama", "Comp. Thinking", "Dasar Prog"}
    };
    for (int i = 0; i < 5; i++) {
        cout << hari[i] << endl;
        for (int j = 0; j < 3; j++) {
            cout << "  Slot " << j + 1 << " - " << slot[j]
                << " : " << matkul[i][j] << endl;
        }
    }

    //Rekap inventaris laboratorium
    cout << endl;
    string ruang[3] = {"Lab 1", "Lab 2", "Lab 3"};
    string alat[4] = {"Komputer", "Monitor", "Router", "Proyektor"};
    int stok[3][4] = {
        {30, 30, 2, 1},
        {25, 25, 1, 1},
        {20, 20, 1, 0}
    };
    int totalSemua = 0;
    cout << left << setw(8) << "Ruang";
    for (int j = 0; j < 4; j++) {
        cout << setw(11) << alat[j];
    }
    cout << "Total" << endl;
    for (int i = 0; i < 3; i++) {
        int totalRuang = 0;          // reset tiap ruangan
        cout << left << setw(8) << ruang[i];
        for (int j = 0; j < 4; j++) {
            cout << setw(11) << stok[i][j];
            totalRuang += stok[i][j];
        }
        cout << totalRuang << endl;
        totalSemua += totalRuang;
    }
    cout << "Total seluruh perangkat: " << totalSemua << endl;

cout << endl;
//rekap nilai kelas
    string nama[5] = {"Andi", "Budi", "Citra", "Dewi", "Eka"};
    string komp[3] = {"Tugas", "UTS", "UAS"};
    int nilai[5][3] = {
        {85, 80, 90},
        {70, 65, 75},
        {95, 90, 92},
        {60, 70, 65},
        {80, 85, 88}
    };
    double rataMhs[5];
    int tertinggi = 0;
    cout << fixed << setprecision(2) << left;
    cout << setw(8) << "Nama";
    for (int k = 0; k < 3; k++) {
        cout << setw(8) << komp[k];
    }
    cout << "Rata-rata" << endl;
    for (int m = 0; m < 5; m++) {
        int total = 0;
        cout << setw(8) << nama[m];
        for (int k = 0; k < 3; k++) {
            cout << setw(8) << nilai[m][k];
            total += nilai[m][k];
        }
        rataMhs[m] = total / 3.0;
        cout << rataMhs[m] << endl;
        if (rataMhs[m] > rataMhs[tertinggi]) {
            tertinggi = m;
        }
    }
    cout << setw(8) << "Rata2";
    for (int k = 0; k < 3; k++) {
        int total = 0;
        for (int m = 0; m < 5; m++) {
            total += nilai[m][k];
        }
        cout << setw(8) << total / 5.0;
    }
    cout << endl;
    cout << "Rata-rata tertinggi: " << nama[tertinggi]
        << " (" << rataMhs[tertinggi] << ")" << endl;


cout << endl;
//proyek rekap nilai mahasiswa
    const int JML_MHS = 5;
    const int JML_KOMP = 3;
    string komp[JML_KOMP] = {"Tugas", "UTS", "UAS"};
    string nama[JML_MHS];
    int nilai[JML_MHS][JML_KOMP];
    int total[JML_MHS];
    double rata[JML_MHS];
    for (int m = 0; m < JML_MHS; m++) {
        cout << "Nama mahasiswa ke-" << m + 1 << ": ";
        cin >> nama[m];
        for (int k = 0; k < JML_KOMP; k++) {
            do {
                cout << "  Nilai " << komp[k] << " (0-100): ";
                cin >> nilai[m][k];
                if (nilai[m][k] < 0 || nilai[m][k] > 100) {
                    cout << "  Nilai tidak valid, ulangi!" << endl;
                }
            } while (nilai[m][k] < 0 || nilai[m][k] > 100);
        }
    }
    cout << endl << "=== TABEL NILAI ===" << endl;
    cout << left << setw(10) << "Nama";
    for (int k = 0; k < JML_KOMP; k++) {
        cout << setw(7) << komp[k];
    }
    cout << setw(7) << "Total" << "Rata-rata" << endl;
    cout << fixed << setprecision(2);
    int idxMax = 0;
    for (int m = 0; m < JML_MHS; m++) {
        total[m] = 0;         
        cout << left << setw(10) << nama[m];
        for (int k = 0; k < JML_KOMP; k++) {
            cout << setw(7) << nilai[m][k];
            total[m] += nilai[m][k];
        }
        rata[m] = static_cast<double>(total[m]) / JML_KOMP;
        cout << setw(7) << total[m] << rata[m] << endl;
        if (rata[m] > rata[idxMax]) {
            idxMax = m;
        }
    }
    cout << endl << "=== RATA-RATA KOMPONEN ===" << endl;
    for (int k = 0; k < JML_KOMP; k++) {
        int jumlah = 0;
        for (int m = 0; m < JML_MHS; m++) {
            jumlah += nilai[m][k];
        }
        cout << setw(7) << komp[k] << ": "
            << static_cast<double>(jumlah) / JML_MHS << endl;
    }
    cout << endl << "Rata-rata tertinggi: " << rata[idxMax]
        << " (" << nama[idxMax] << ")" << endl;


cout << endl;
//trace table
    int kolom = 1;          
    for (int baris = 1; baris <= 3; baris++) {
        for (; kolom <= 4; kolom++) {
            cout << "(" << baris << "," << kolom << ") ";
        }
        cout << endl;
    }




    string hari[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
    string slot[3] = {"08.00", "10.00", "13.00"};
    string matkul[5][3] = {
        {"Dasar Prog", "", "Mat. Dasar"},
        {"", "B. Inggris", ""},
        {"Mat. Dasar", "Dasar Prog", ""},
        {"", "", "B. Inggris"},
        {"Agama", "Comp. Thinking", "Dasar Prog"}
    };
    int terisi = 0, kosong = 0;
    for (int i = 0; i < 5; i++) {
        cout << hari[i] << endl;
        for (int j = 0; j < 3; j++) {
            if (matkul[i][j] != "") {
                cout << "  " << slot[j] << " - " << matkul[i][j] << endl;
                terisi++;
            } else {
                kosong++;
            }
        }
    }
    cout << "Slot terisi = " << terisi
        << ", slot kosong = " << kosong << endl;


cout << endl;
//
    cout << "a) Angka 1:" << endl;
    for (int baris = 1; baris <= 4; baris++) {
        for (int kolom = 1; kolom <= 6; kolom++) {
            cout << "1 ";
        }
        cout << endl;
    }
    cout << endl << "b) Nomor kolom:" << endl;
    for (int baris = 1; baris <= 4; baris++) {
        for (int kolom = 1; kolom <= 6; kolom++) {
            cout << kolom << " ";
        }
        cout << endl;
    }



int main() {
    int baris = 5;
    while (baris >= 1) {
        int kolom = 1;
        while (kolom <= baris) {
            cout << "* ";
            kolom++;
        }
        cout << endl;
        baris--;
    }
    return 0;
}

    

    int b, k;
    cout << "Masukkan batas baris : ";
    cin >> b;
    while (b <= 0) {
        cout << "Batas harus positif! Ulangi: ";
        cin >> b;
    }
    cout << "Masukkan batas kolom : ";
    cin >> k;
    while (k <= 0) {
        cout << "Batas harus positif! Ulangi: ";
        cin >> k;
    }
    cout << endl;
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= k; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
