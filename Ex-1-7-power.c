#include  <stdio.h>

int power(int m, int n);


// test power function
int main()
{
    for (int i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    } // for
    return 0;
} // main


// power: raise base to n-th power; n>=0
int power(int base, int n)
{
    int p = 1;

    for (int i = 1; i <= n; ++i) {
        p = p * base;
    } // for

    return p;
} // power
