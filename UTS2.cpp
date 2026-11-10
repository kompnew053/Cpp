#include <iostream>
#include <string>
using namespace std;

int main()
{
    double ukt;
    ukt = 5000000;
    int nilai;
    nilai = 99;
    string usn, pass;
    usn = "1267050009@gmail.com";
    pass = "12345678";
    cout << "Masukkan Username Anda: ";
    cin >> usn;
        if (usn == usn){
            cout << "Masukkan Password Anda: ";
            cin >> pass;
            if (pass == pass){
                int menu;
                cout << "=====================\n";
                cout << "Menu Sistem Akademik: \n";
                cout << "1. Biodata\n"
                        "2. KRS\n"
                        "3. Nilai\n"
                        "4. Jadwal\n"
                        "5. Keuangan\n"
                        "6. Keluar\n";
                do{
                    cout << "---------------------\n";
                    cout << "Pilih Menu (angka): ";
                    cin >> menu;
                    cout << "=====================\n";
                    switch (menu)
                    {
                    case 1:
                        cout << "Biodata Anda\n";
                        cout << "1. Nama: Gina Fitriani\n";
                        cout << "2. NIM: 1267050009\n";
                        cout << "3. Prodi: Teknik Informatika\n";
                        cout << "4. Semester: 1\n";
                        break;
                    case 2:
                        cout << "Jadwal KRS Anda\n";
                        cout << "No. 1\n"
                                "Mata Kuliah: Dasar Pemrograman\n"
                                "Kelas: B\n"
                                "SKS: 3\n"
                                "Ruang: R.4.12\n"
                                "Hari: Rabu\n"
                                "Waktu: 07:00:00 s/d 09:30:00\n"
                                "Dosen: Mohamad Irfan ST., M.Kom., Ph.D\n";
                        break;
                    case 3:
                        cout << "Nilai Anda: " << nilai << endl;
                            if (nilai >= 90){
                                cout << "Grade: A";}
                            else if (nilai >=70){
                                cout << "Grade B";
                            }else if (nilai >= 40){
                                cout << "Grade C";
                            }else{
                                cout << "D";
                            }
                        break;
                    case 4:
                        cout << "Jadwal Anda\n";
                        cout << "Senin:\n" "Selasa:\n" "Rabu:\n" "Kamis:\n" "Jumat:\n";
                        break;
                    case 5:
                        cout << "Keuangan\n";
                        if (ukt >= 5000000){
                            cout << "Boleh Mengikuti Ujian";
                        }
                        else {
                            cout << "Tidak Dapat Mengukuti Ujian";}
                        break;
                    case 6:
                        cout << "Terima kasih telah menggunakan layanan kami";
                        break;
                    default:
                        cout << "Menu tidak ada\n";
                        break;
                    }
                }while(menu != 6);
                }  
            else{
                cout << "Password Anda Salah";
            }
        }else{
            cout << "Usn Anda Salah";
        }
    return 0;
}