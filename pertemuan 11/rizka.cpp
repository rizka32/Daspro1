#include <iostream>

using namespace std;

int main()
{

int f1 = 0, f2 = 1, hasil;
int n = 12, a = 1;

cout << "-----------------------" << endl;
cout << "Program Fibonacci \n";
cout << "Nama : Rizka Nugraha \n";
cout << "NIM : A11.2022.14119 \n";
cout << "Kelompok : A11.4104 \n";
cout << "-----------------------" << endl;

do {
    f1 = 0;
    f2 = 1;
    hasil = 0;
    cout << endl;
    int b = 1;

    do {
        f1 = f2;
        f2 = hasil;
        cout << hasil << " ";
        hasil = f1+f2;
        b++;
    } while(b <= a);
    a++;
} while(a <= n);

cout << "\n-----------------------" << endl;
return 0;
}
