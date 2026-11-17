#include <iostream>
using namespace std;

int main() {
    int menu;
    int nomorAntrian = 0;
    int nomorDilayani = 0;
    do {
        cout << "\n=== MENU ANTRIAN ===\n";
        cout << "1. Ambil Nomor\n";
        cout << "2. Panggil Nomor\n";
        cout << "3. Lihat Nomor\n";
        cout << "4. Reset\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> menu;
        switch (menu) {
            case 1:
                nomorAntrian++;
                cout << "Nomor antrian Anda: " << nomorAntrian;
                break;
            case 2:
                if (nomorDilayani < nomorAntrian) {
                    nomorDilayani++;
                    cout << "Memanggil nomor: " << nomorDilayani;
                }
                else {
                    cout << "Tidak ada antrian.";
                }
                break;
            case 3:
                cout << "Nomor terakhir diambil: " << nomorAntrian << endl;
                cout << "Nomor sedang dilayani: " << nomorDilayani;
                break;
            case 4:
                nomorAntrian = 0;
                nomorDilayani = 0;
                cout << "Antrian berhasil direset.";
                break;
            case 5:
                cout << "Program selesai.";
                break;
            default:
                cout << "Pilihan tidak valid.";
        }
    } while (menu != 5);
    return 0;
}
