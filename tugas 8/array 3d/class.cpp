#include "head.hpp"

int FPB(int a, int b) {
int r = 0;
if(a>b) {
while(b != 0) {
    r = a%b;
    a = b;
    b = r;

}
} else {
    while(b != 0) {
        r = b%a;
        b = a;
        b = r;
    }
}
return a;
}

void FPB2(int a, int b) {
int r = 0;
int fpb2;
if(a>b) {
while(b != 0) {
    r = a%b;
    a = b;
    b = r;

}
} else {
    while(b != 0) {
        r = b%a;
        b = a;
        b = r;
    }
}
fpb2 = a;
cout << endl;
cout << "FPB 2 = " << fpb2;
}



void FPB3(int a, int b, int &fpb3) {
int r = 0;
if(a>b) {
while(b != 0) {
    r = a%b;
    a = b;
    b = r;

}
} else {
    while(b != 0) {
        r = b%a;
        b = a;
        b = r;
    }
}
fpb3 = a;
cout << endl;
cout << "FPB 3 = " << fpb3;
}

void FPB4(int a, int b, int *fpb4) {
int r = 0;
if(a>b) {
while(b != 0) {
    r = a%b;
    a = b;
    b = r;

}
} else {
    while(b != 0) {
        r = b%a;
        b = a;
        b = r;
    }
}
*fpb4 = a;
cout << endl;
cout << "FPB 4 = " << *fpb4;
}

int KPK(int a, int b) {
int kpk;

kpk = a*b/FPB(a,b);

return kpk;
}

