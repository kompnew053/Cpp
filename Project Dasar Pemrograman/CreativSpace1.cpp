#include <iostream>
using namespace std;

int main() {
    string nama;
    int pilihanMenu;
    
    string namafile [10], judul[10], tanggal[10], deskripsi[10];
    int jumlahKarya = 0;

    // 1. Login
    cout << "=========================================\n";
    cout << "   SELAMAT DATANG DI CREATIVSPACE        \n";
    cout << "=========================================\n";
    cout << "Silakan login menggunakan username\n";
    cout << "Masukkan Username Anda: ";
    cin >> nama;
    
    cout << "\n[Berhasil Login!] Selamat datang, " << nama << "\n";

    do {
        cout << "\n=========================================\n";
        cout << "       HALAMAN UTAMA - RUANG GALERI      \n";
        cout << "=========================================\n";
        cout << "Total Karya Tersimpan: " << jumlahKarya << " / 10\n";
        cout << "1. Upload Karya Baru\n";
        cout << "2. Lihat Daftar & Detail Karya\n";
        cout << "3. Bagikan Galeri / Salin Link\n";
        cout << "4. Logout / Keluar Aplikasi\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihanMenu;

        switch (pilihanMenu) {
            case 1: {                
                if (jumlahKarya < 10) {
                    cout << "\n--- FORM UPLOAD KARYA (" << jumlahKarya + 1 << "/10) ---\n";
                    cout << "Masukkan Nama File Foto Karya      : ";
                    cin >> namafile[jumlahKarya];
                    cout << "Masukkan Judul Karya               : ";
                    cin >> judul[jumlahKarya];
                    cout << "Masukkan Tanggal Pembuatan         : ";
                    cin >> tanggal[jumlahKarya];
                    cout << "Masukkan Deskripsi Karya           : ";
                    cin >> deskripsi[jumlahKarya];
                    
                    jumlahKarya++;
                    cout << "\n[Sukses] Karya berhasil diunggah ke ruang galeri!\n";
                } else {
                    cout << "\n[Peringatan] Ruang galeri penuh (maksimal 5 karya)!\n";
                }
                break;
            }
            case 2: {
                if (jumlahKarya == 0) {
                    cout << "\n[Informasi] Belum ada karya yang diunggah di ruang galeri Anda.\n";
                } else {
                    cout << "\n--- DAFTAR KARYA ANDA ---\n";
                    for (int i = 0; i < jumlahKarya; i++) {
                        cout << i + 1 << ". " << judul[i] << " (" << tanggal[i] << ")\n";
                    }
                    
                    int pilihDetail;
                    cout << "\nPilih nomor karya untuk melihat detail (0 untuk kembali): ";
                    cin >> pilihDetail;
                    
                    if (pilihDetail > 0 && pilihDetail <= jumlahKarya) {
                        int idx = pilihDetail - 1;
                        cout << "\n--- DETAIL KARYA ---\n";
                        cout << "Nama File  : " << namafile[idx] << "\n";
                        cout << "Judul      : " << judul[idx] << "\n";
                        cout << "Tanggal    : " << tanggal[idx] << "\n";
                        cout << "Deskripsi  : " << deskripsi[idx] << "\n";
                    }
                }
                break;
            }
            case 3: {
                cout << "\n--- HALAMAN BERBAGI ---\n";
                cout << "Link Galeri Anda: https://creativspace.web/" << nama << "\n";
                break;
            }
            case 4: {
                cout << "\nTerima kasih telah menggunakan CreativSpace. Anda telah keluar.\n";
                break;
            }
            default: {
                cout << "\nPilihan tidak valid. Silakan pilih menu 1-4.\n";
                break;
            }
        }
    } while (pilihanMenu != 4);

    return 0;
}