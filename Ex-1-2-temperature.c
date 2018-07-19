#include <stdio.h>

/* Fahrenheit-Celsius table */

int main() {
    float fahr, cels;
    int lower, upper, step;

    lower = 0;      // lower limit of temp
    upper = 300;    // upper limit of temp
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper){
        cels = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }

    return 0;
}
