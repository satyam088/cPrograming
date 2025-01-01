#include <stdio.h>
#include "facto.c" // I include this file from my system to get some function in my this code .

// int sum; // Global variable or we can say IT is a External variable (External storage class)

int add(int a, int b)
{
    // auto int sum; // or you can right "auto int sum" ,it id the same thing .
    extern int sum ;
    // sum = a + b;
    return sum;
}
int sum = 343;
int main()
{
    int sum = add(9, 7);
    printf("%d\n", sum);
    printf("%d\n", fac(5));
    return 0;
}