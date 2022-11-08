#include <iostream>

using namespace std;

int main()
{
    int uang,hrga_st,jum=0;
    uang = 5000;
    char pil;

    cout << "-------------------------------" << endl;
    cout << "Pilihan A : Harga permen 500." << endl;
    cout << "Pilihan B : Harga permen 1000." << endl;
    cout << "Pilihan C : Harga permen 300." << endl;
    cout << "-------------------------------" << endl;
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
            for(hrga_st = 300; hrga_st <= uang; hrga_st += 300) {
                jum += 1;
            }
            cout << "Dito mendapatkan permen sebanyak " << jum << "." << endl;
            break;
        }
        default:
            cout << "Pilihan Anda tidak ada, hanya ada pilihan A,B,C." << endl;
        }
    return 0;
}
