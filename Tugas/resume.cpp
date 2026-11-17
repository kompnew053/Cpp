#include <iostream> //1 file project main termasuk input output stream (library bawaan)
#include <chrono> //library tanggal
using namespace std; //untuk keseluruhan main cout

    ///function 
    //pertambahan
    int tambah (int x, int y) 
    {return x+y;}
    int kurang (int x, int y) 
    {return x-y;}
    int kali (int x, int y) 
    {return x*y;}
    int bagi (double x, double y) 
    {return x/y;}

    //void
    void log (int result) {
        cout << endl << "hasilnya adalah " << result;
    }

int main() //untuk menandai ini yang utama dijalankan
 {
    std::cout << "bisa kan" << endl << endl;//bisa pakai ini juga di setiap baris cout
    //cout untuk output

    //variabel
    double desimal = 47.5; //variabel angka desimal
    int bulat = 475; //variabel angka bulat
    char huruf = 'A';
    string kata = "halo";

    //print-output
    cout << "Print-Output" << endl;
    cout << "hai ii" << endl; //print huruf
    cout << 67 << endl; //print angka
    cout << desimal << endl << bulat << endl << huruf << endl << kata << endl; //memanggil variabel
    cout << true << endl;
    cout << false << endl;

    //
    cout << endl << "Aturan Variabel" << endl;
    int usia = 23; //pakai const agar variabel tidak berubah
    double tinggi = 175.5;
    usia = 30; //variabel akan terganti dengan yang terbaru
    cout << "usia saya adalah " << usia << " dan tinggi saya adalah " << tinggi << endl;

    //rumus mtk simple
    cout << endl <<"rumus simple" << endl;
    double x = 5; //variabel
    double y = 9; //variabel
    int a = x + y; //penjumlahan
    int b = x - y; //pengurangan
    int c = x * y; //perkalian
    double d = x / y; //pembagian
    cout << "hasil dari " << x << " + " << y << " adalah " << a << endl;
    cout << "hasil dari " << x << " - " << y << " adalah " << b << endl;
    cout << "hasil dari " << x << " * " << y << " adalah " << c << endl;
    cout << "hasil dari " << x << " / " << y << " adalah " << d << endl;

    ///function 
    //pertambahan
    cout << endl << "function";
    int plus = tambah(9, 88);
    int minus = kurang(9, 88);
    int multiplied = kali(9, 88);
    int divided = bagi(9, 88); 
    //void
    log(plus);
    log(minus);
    log(multiplied);
    log(divided);

    //kondidi if 
    cout << endl << endl<< "if else";
    int rapot = 40;
    if(rapot > 80)
        cout << endl << "bagus";
    else if(rapot > 40)
        cout << endl << "oke";
    else
        cout << endl << "hmm";
    
    //input
    cout << endl << endl << "input";
    auto sekarang = chrono::system_clock::now();
    int birth{};
    cout << endl << "masukkan tahun kelahiran anda ";
    cin >> birth;
    log(birth); 


return 0;
}