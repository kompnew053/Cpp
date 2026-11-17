#include <iostream>
using namespace std;

int main() {
    int pilihan;
    cout << "=== MENU LAYANAN ===" << endl;
    cout << "1. Beasiswa" << endl;
    cout << "2. Organisasi Mahasiswa" << endl;
    cout << "3. Surat Aktif Kuliah" << endl;
    cout << "4. Kegiatan Mahasiswa" << endl;
    cout << "5. Konseling Akademik" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu (1-6): ";
    cin >> pilihan;
    switch (pilihan) {
        case 1:
            cout << "Informasi Beasiswa: Pendaftaran beasiswa dibuka setiap awal semester.";
            break;
        case 2:
            cout << "Organisasi Mahasiswa: Tersedia berbagai UKM dan organisasi kemahasiswaan.";
            break;
        case 3:
            cout << "Surat Aktif Kuliah: Pengajuan dapat dilakukan melalui bagian akademik.";
            break;
        case 4:
            cout << "Kegiatan Mahasiswa: Terdapat seminar, lomba, dan pelatihan setiap bulan.";
            break;
        case 5:
            cout << "Konseling Akademik: Hubungi dosen wali untuk konsultasi akademik.";
            break;
        case 6:
            cout << "Terima kasih telah menggunakan layanan.";
            break;
        default:
            cout << "Pilihan tidak valid.";
    }
    return 0;
}
