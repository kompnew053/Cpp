#include <iostream>
using namespace std;

int main()
{
    int jammasuk, jamkeluar, durasi, totalbiaya, jenis;
    cout << "========== SISTEM PARKIR KAMPUS ==========" << endl;
    cout << "| Jam Masuk: ";
    cin >> jammasuk;
    cout << "| Jenis Kendaraan:                       |" << endl;
    cout << "|1. Mobil                                |" << endl;
    cout << "|2. Motor                                |" << endl;
    cout << "| Pilih Jenis Kendaraan (1/2): "; 
    do {
        cin >> jenis;
        if (jenis != 1 && jenis != 2) {
            cout << "Jenis kendaraan tidak valid. Ulangi input." << endl;
        }
    }while(jenis != 1 && jenis != 2);

    cout << "==========================================\n";


    cout << "[Pengendara mendapatkan tiket parkir berisi jam masuk dan jenis kendaraan dalam bentuk kode qr]\n";
    cout << "[Plang otomatis terbuka dan pengendara masuk]";
    cout << endl << endl;

    
    cout << "[Ketika pengendara ingin keluar, pengendara menunjukkan tiket parkir ke petugas dan petugas memindai kode qr]\n";
    cout << "=========== TOTAL BIAYA PARKIR ===========" << endl;
    cout << "| Jam Keluar: ";
    cin >> jamkeluar;
    durasi = jamkeluar - jammasuk;
        if (jenis == 1) {
            totalbiaya = durasi * 3000;
        } else if (jenis == 2) {
            totalbiaya = durasi * 1000;
        }
    cout << "| Durasi Parkir: " << durasi << " jam                  |" << endl;
    cout << "| Total Biaya: Rp " << totalbiaya << "                  |" << endl;
    cout << "==========================================\n";
    cout << "[Keterangan biaya parkir akan ditampilkan di layar]\n";
    cout << "[Pengendara membayar biaya parkir dan plang otomatis terbuka]\n";

    return 0;
}
