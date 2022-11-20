#include <iostream>

using namespace std;

int main () {

int i, j, a=0, angka, mins, maks;
float ra;

//soal no 1
cout << "------------------" << endl;
cout << "Soal no. 1" << endl;
cout << "------------------" << endl;
for (i = 100, j = 1; i >=  1 && j <= 100; i--, j++) {
  cout << "i = " << i << " dan j = "<< j << endl;
}

//soal no 2
cout << "\n------------------" << endl;
cout << "Soal no. 2" << endl;
cout << "------------------" << endl;
for( j = 1; j <= 100; j++) {
    if(j % 2 == 1) {
        continue;
    }
    cout << "Nilai genap adalah " << j << endl;
}

// soal no 3
cout << "\n------------------" << endl;
cout << "Soal no. 3" << endl;
cout << "------------------" << endl;
for(i = 100; i >= 1; i--) {
        cout << i << endl;
    if(i == 55) {
        break;
    }
}

// soal no 4
cout << "\n------------------" << endl;
cout << "Soal no. 4" << endl;
cout << "------------------" << endl;
for(j = 1; j <= 20; j++) {
 cout << j << endl;
 a += j;
 ra = a/j;
}
cout << "\nJumlah = " << a << endl;
cout << "Rata-rata = "<< ra << ".00" << endl;

//soal no 5
cout << "\n------------------" << endl;
cout << "Soal no. 5" << endl;
cout << "------------------" << endl;
cout << "Program ini berhenti jika Anda  Menginputkan Angka = -99\n" << endl;
for(j = 1; j <= 100; j++) {
    cout << "Masukan Nilai Anda ";
    cin >> angka;
    if(angka == -99) {
        cout << "\nKeluar Karena Break " << endl;
        break;
    }
}

//soal no 6
cout << "\n------------------" << endl;
cout << "Soal no. 6" << endl;
cout << "------------------" << endl;
for(j = 1; j <= 100; j++) {
    cout << "Masukan Nilai Anda ";
    cin >> angka;
    if(angka == -99) {
        break;
    }

    if(j == 1) {
        mins = angka;
        maks = angka;
    } else { if(angka > maks) {
        maks = angka;
    } if(angka < mins) {
        mins = angka;
    }
    }
}
cout << endl;
cout << "Max = " << maks << endl;
cout <<"Min = " << mins << endl;

return 0;
}
