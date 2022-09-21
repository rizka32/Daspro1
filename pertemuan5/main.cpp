#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string anu = "==================================\n";
    string data = "Nama : Rizka Nugraha\nNIM : A11.2022.14119\nKelompok : A11.4104\n";

    // Luas Lingkaran
    int r;
    float luas;
    float phi = 3.14;
    cout << anu;
    cout << data;
    cout << anu;
    cout << "Program Operasi Hitung\nLuas Lingkaran \n";
    cout << anu;
    cout << "Masukkan jari-jari lingkaran : "; cin >> r;
    if (r % 7 == 0) {
        luas=(22*r*r)/7; //Phi 22/7
    } else {
        luas=phi*r*r; //Phi 3.14
    };
    cout << "\nHasil luas lingkaran\ndengan rumus phi*r*r\nadalah : " << luas << endl;
    cout << anu;

    // Luas persegi panjang
    float p,l;
    float luass;
    cout << "Program Operasi Hitung\nLuas Persegi Panjang \n";
    cout << anu;
    cout << "Masukkan panjang : "; cin >> p;
    cout << "Masukkan lebar : "; cin >> l;
    luass=p*l;
    cout << "Hasil luas persegi panjang\ndengan rumus luas p*l \nadalah : " << luass << endl;
    cout << anu;

    return 0;
}
