#include <iostream>
using namespace std;

int main(){
    float tugasmandiri, tugasterstruktur, uts, uas;
    float NilaiAkhir;

    cout << "===========================\n";
    cout << "Nama: Gina Fitriani\n";
    cout << "NIM: 1267050009\n";
    cout << "Jurusan: Teknik Informatika\n";
    cout << "===========================\n";

    cout << "Nilai Tugas Mandiri: ";
    cin >> tugasmandiri;
    cout << "Nilai Tugas Terstruktur: ";
    cin >> tugasterstruktur;
    cout << "Nilai UTS: ";
    cin >> uts;
    cout << "Nilai UAS: ";
    cin >> uas;

    NilaiAkhir = (0.20 * tugasmandiri) + 
                 (0.20 * tugasterstruktur) + 
                 (0.20 * uts) +
                 (0.40 * uas);

    cout << "\nNilai Akhir: " << NilaiAkhir << endl;

    return 0;
}