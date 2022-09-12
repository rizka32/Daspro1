#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    /*
    Nama : Rizka Nugraha
    NIM : A11.2022.14119
    Kelompok : A11.4104
    */
    string jeneng = "Rizka Nugraha";
    char ju = 'L';
    float tb = 173.4;
    int umur = 29-10;
    string ub = "XL";
    string c = "=====================================";
    cout << c << endl;
    cout << "Nama : " << jeneng;
    cout << "\nUmur : " << umur << " tahun";
    cout << "\nTinggi badan : " << tb << " cm";
    cout << "\nUkuran baju 1 : " << ju;
    cout << "\nUkuran baju 2 : " << ub;

    int u;
    printf("\nMasukan Umur : ");
    scanf("%d", &u);
    printf("Umur kamu sekarang : %d tahun", u);

    cout << "\n" << c << endl;

    return 0;
}
