#include <iostream>

using namespace std;

int main()
{
    int harga,uang,hrga_st,jum=0;
    uang = 5000;
    char pil;

    cout << "-----------------------------" << endl;
    cout << "Pilihan A : Harga permen 500." << endl;
    cout << "Pilihan B : Harga permen 1000." << endl;
    cout << "Pilihan C : Harga permen 300." << endl;
    cout << "-----------------------------" << endl;
    cout << "Masukkan pilihan : ";
    cin >> pil;

    switch(pil) {
        case 'a':
            case 'A':
            {
            hrga_st = 500;
            jum = uang/hrga_st-5;
            cout << "Dito mendapatkan permen sebanyak " << jum << "." << endl;
        break;
        }
        case 'b':
            case 'B': {
            hrga_st = 1000;
            jum = uang/hrga_st;
            cout << "Dito mendapatkan permen sebanyak " << jum << "." << endl;
        break;
        }
        case 'c':
            case 'C': {
            hrga_st = 300;
            for(int i = 300; i <= uang; i += 300) {
                jum += 1;
            }
         cout << "Dito mendapatkan permen sebanyak " << jum << "." << endl;
            break;
        }
        }

    return 0;
}
