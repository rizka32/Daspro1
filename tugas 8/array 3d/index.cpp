#include "head.hpp"
#include "class.cpp"


int main() {
int a = 12;
int b = 8;
int fpb, fpb2,fpb3, fpb4, kpk;

fpb = FPB(a,b);
cout <<"FPB 1 = " << fpb;
FPB2(a,b);
FPB3(a,b, fpb3);
FPB4(a,b, &fpb4);

cout << endl;
kpk = KPK(a,b);
cout << "KPK = " << kpk;
return 0;
}
