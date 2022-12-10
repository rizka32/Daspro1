#include "stdio.h"

int main() {

float rata_rata;
int love = 0, you = 1, cher = 0, ly = 2;
int hm[3][2][2];

printf("Array kelipatan 4 = ");
for(int o = 0; o < 3; o++) {
    for(int k = 0; k < 2; k++) {
        for(int e = 0; e < 2; e++){
            hm[o][k][e] = ly;
            ly += 2;
            printf("%d " "", ly);
            cher += ly;
            love += you;
            rata_rata = (float)cher / love;
        }
    }
}
printf("\n");
printf("Sum kelipatan 4 = %d\n", cher);
printf("Rata-rata kelipatan 4 = %.2f\n", rata_rata);

return 0;
}
