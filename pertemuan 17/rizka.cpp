#include <iostream>
#include <stdio.h>
using namespace std;

int main () {

int i, j, a=0, angka, mins, maks, b=0, has, c, z, p=0, m, n=0;
float ra, f;
string k[9] = {"Air Mendidih",
                "Air Mandi Panas",
                "Temperatur Tubuh",
                "Cuaca Pantai",
                "Temperatur Ruangan",
                "Hari Yang Dingin",
                "Titik Beku Air",
                "Cuaca Dingin Bersalju",
                "Cuaca Sangat Dingin Bersalju"
};

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
 ra = (float)a/j;
}
cout << "\nJumlah = " << a << endl;
cout << "Rata-rata = "<< ra << endl;

//soal no 5
cout << "\n------------------" << endl;
cout << "Soal no. 5" << endl;
cout << "------------------" << endl;
cout << "Program ini berhenti jika Anda  Menginputkan Angka = -99\n" << endl;
for(j = 1; ; j++) {
    cout << "Masukan Nilai Anda = ";
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
for(j = 1; ; j++) {
    cout << "Masukan Nilai Anda = ";
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

//soal no 7
cout << "------------------" << endl;
cout << "Soal no. 7" << endl;
cout << "------------------" << endl;
for(j = 1; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> z;
    if(z == 9999) {
        break;
    }
    cout << z << endl;
    p = p + z;
}
cout << "Jumlah angka = " << p << endl;

//soal no 8
cout << "\n------------------" << endl;
cout << "Soal no. 8" << endl;
cout << "------------------" << endl;
for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angka;
    if(angka == 9999) {
        break;
    }
    cout << angka << endl;
    a += j;
}
cout << "Jumlah angka = " << j << endl;

// soal no 9
cout << "\n------------------" << endl;
cout << "Soal no. 9" << endl;
cout << "------------------" << endl;
for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> m;
    cout << m << endl;
    if(m == 9999) {
        break;
    } else if(m != 9999) {
        n += m;
    }
        b += 1;
}
cout << "Jumlah angka = " << n << endl;
cout << "Jumlah cacah angka = " << b << endl;

// soal no 10
cout << "\n------------------" << endl;
cout << "Soal no. 10" << endl;
cout << "------------------" << endl;
for(i = 1; i <= 7; i++) {
    cout << "Looping yang ke - " << i << endl;
    for(j = 1; j <= 10; j++) {
        cout << "-angka " << j << "-" << endl;
    }
    cout << endl;
}

//soal no 11
cout << "\n------------------" << endl;
cout << "Soal no. 11" << endl;
cout << "------------------" << endl;
cout << "Masukan angka = ";
cin >> angka;
for(i = 1; i <= 10; i++) {
    has = i*angka;
    cout << i << " x " << angka << " = " << has << endl;
}

//soal no 12
cout << "\n------------------" << endl;
cout << "Soal no. 12" << endl;
cout << "------------------" << endl;
cout << "-------------------------" << endl;
cout << "Celcius\tFahrenheit" << endl;
cout << "-------------------------" << endl;
for(c = 0; c <= 100; c++) {
  f = ((9.0/5)*c)+32;
  printf("%d \t|\t %.1f |\n", c, f);
}

// soal no 13
cout << "\n------------------" << endl;
cout << "Soal no. 13" << endl;
cout << "------------------" << endl;
cout << "------------------------------------------------------------------------------" << endl;
cout << "Celcius \t Fahrenheit \t Keterangan" << endl;
cout << "------------------------------------------------------------------------------" << endl;
for(c = 100; c >= -45; c--) {
  f = ((9.0/5)*c)+32;
  if(c == 100) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[0].c_str());
  } else if(c == 40) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[1].c_str());
  } else if(c == 37) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[2].c_str());
  } else if(c == 30) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[3].c_str());
  } else if(c == 21) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[4].c_str());
} else if(c == 10) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[5].c_str());
} else if(c == 0) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[6].c_str());
} else if(c == -18) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[7].c_str());
} else if(c == -40) {
  printf("%d \t\t %.1f \t\t %s \n", c, f, k[8].c_str());
  cout << "------------------------------------------------------------------------------" << endl;
}
}

return 0;
}
