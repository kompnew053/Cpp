#include <iostream>
using namespace std;

int main()
{
    float ipk, hadir, nilaiakhir;
    char aktif, tugas;
    string status;
        cout << "========================================" << endl;
    cout << "      Sistem Evaluasi Mahasiswa" << endl;
    cout << "========================================" << endl;
    cout << "Apakah mahasiswa ini aktif?(y/t): ";
    cin >> aktif;
    if (aktif == 'y' || aktif == 'Y')
    {
        cout << "Masukkan IPK mahasiswa: ";
        cin >> ipk;
        if (ipk >= 2.0)
        {
            cout << "Masukkan persentase kehadiran: ";
            cin >> hadir;
            if (hadir >= 75)
            {
                cout << "Masukkan nilai akhir: ";
                cin >> nilaiakhir;
                if (nilaiakhir >= 50)
                {
                    cout << "Apakah tugas sudah lengkap?(y/t): ";
                    cin >> tugas;
                    if (tugas == 'y' || tugas == 'Y')
                    {
                    cout << "LULUS" << endl;
                        if (nilaiakhir >= 90)
                        {
                            cout << "Grade A";
                        }
                        else if (nilaiakhir >= 80)
                        {
                            cout << "Grade B";
                        }
                        else if (nilaiakhir >= 70)
                        {
                            cout << "Grade C";
                        }
                        else
                        {
                            cout << "Grade D";
                        }
                        cout << "\nDapat mengikuti program berikutnya";
                    }
                    else
                    {
                        cout << "TIDAK LULUS\n";
                        cout << "TUGAS TIDAK LENGKAP-LENGKAPI TUGAS ANDA";
                    }
                }
                else
                {
                    cout << "TIDAK LULUS\n";
                    cout << "NILAI AKHIR TIDAK MEMENUHI SYARAT (50)";
                }
            }
            else
            {
                cout << "TIDAK LULUS\n";
                cout << "KEHADIRAN TIDAK MEMENUHI SYARAT (75)";
            }
        }
        else
        {
            cout << "TIDAK LULUS\n";
            cout << "IPK MAHASISWA TIDAK MEMENUHI SYARAT (2.0)";
        }
    }
    else
    {
        cout << "STATUS NONAKTIF";
    }

    cout << "\n========================================\n";
    return 0;
}