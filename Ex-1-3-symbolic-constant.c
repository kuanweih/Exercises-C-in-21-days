#include <stdio.h>

/* symbolic constants*/
#define LOWER 0         // lower limit of temp
#define UPPER 300    // upper limit of temp
#define STEP 20      // step size

/* Fahrenheit-Celsius table */
int main() {
    int fahr;
    float cels;

    for (fahr=LOWER; fahr<=UPPER; fahr=fahr+STEP){
        cels = (5.0/9.0) * (fahr - 32.0);
        printf("%3d %6.1f\n", fahr, cels);
    }

    return 0;
}
