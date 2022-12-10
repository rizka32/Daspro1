#include "stdio.h"

int main() {

float rata_rata;
int love = 0, you = 1, co = 0, mel = 2;
int hm[3][2][2];

printf("Array kelipatan 4 = ");
for(int o = 0; o < 3; o++) {
    for(int k = 0; k < 2; k++) {
        for(int e = 0; e < 2; e++) {
            hm[o][k][e] = mel;
            mel += 2;
            printf("%d " "", mel);
            co += mel;
            love += you;
            rata_rata = (float)co / love;
        }
    }
}
printf("\n");
printf("Sum kelipatan 4 = %d\n", co);
printf("Rata-rata kelipatan 4 = %.2f\n", rata_rata);

return 0;
}
