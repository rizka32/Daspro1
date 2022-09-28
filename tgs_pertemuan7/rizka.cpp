#include <iostream>
#include <string.h>
#include <stdio.h>
#include <limits>

using namespace std;

int main(){
    string g = "=============================\n";
    string d = "Nama : Rizka Nugraha\nNIM : A11.2022.14119\nKelompok : A11.4104\n";

    int n, m;
    string jurusan[3] = {"Teknik Informatika","Sistem Informasi","Desain Komunikasi Visual"};
    string mahasiswa[4] = {"Freshman","Shopomore","Junior","Senior"};
    cout << g;
    cout << d;
    cout << g;
    cout << "===Daftar Jurusan===" << endl;
    cout << "1. " << jurusan[0] << endl;
    cout << "2. " << jurusan[1] << endl;
    cout << "3. " << jurusan[2] << endl << endl;

    cout <<"===Kategori Mahasiswa===" << endl;
    cout <<"1. Semester 1-2 = " << mahasiswa[0] << endl;
    cout <<"2. Semester 3-4 = " << mahasiswa[1] << endl;
    cout <<"3. Semester 5-6 = " << mahasiswa[2] << endl;
    cout <<"4. Semester 7-8 = " << mahasiswa[3] << endl << endl;

    cout << g;

    cout << "Masukkan jurusan Anda: ";
    while(!(cin >> n)) {
        cout << "Yang Anda masukkan bukan type angka" << endl;
        cout << "Masukkan jurusan Anda: ";
        cin.clear();
        cin.ignore(123,'\n');
    };


    cout << "Masukkan semester Anda: ";
    while(!(cin >> m)) {
        cout << "Yang Anda masukkan bukan type angka" << endl;
        cout << "Masukkan semester Anda: ";
        cin.clear();
        cin.ignore(123,'\n');
    };

    if (m >= 1 && m <= 2){
        cout << "Jurusan Anda adalah " << jurusan[n-1]<< "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[0] << " year." << endl;
    }
     else if (m >= 3 && m <= 4){
        cout << "Jurusan Anda adalah " << jurusan[n-1]<< "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[1] << " year." << endl;
    }
    else if (m >= 5 && m <= 6){
        cout << "Jurusan Anda adalah " << jurusan[n-1]<< "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[2] << " year." << endl;
    }
     else if (m >= 7 && m <= 8){
        cout << "Jurusan Anda adalah " << jurusan[n-1]<< "." << endl;
        cout << "Anda dalam kategori " << mahasiswa[3] << " year." << endl;
    }
    else{
        cout << "Pilihan Anda Salah!" << endl;
    }
    cout << g;

    return 0;
}

