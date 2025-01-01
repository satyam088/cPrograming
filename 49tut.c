#include <stdio.h>
#include "facto.c" // I include this file from my system to get some function in my this code .

// int sum; // Global variable or we can say IT is a External variable (External storage class)

int add(int a, int b)
{
    // auto int sum; // or you can right "auto int sum" ,it id the same thing .
    // extern int sum ; // now it will take the sum global value .
    static int ko ;
    // sum = a + b;
    printf("THe ko is %d\n" ,ko);
    ko++;

    return ko;
}
// int sum = 343;
int main()
{
    // int ko = add(9, 7);

      register int ko = add(9, 7);
     ko = add(9, 7);
     ko = add(9, 7);
     ko = add(9, 7);
     ko = add(9, 7);
     ko = add(9, 7);
    // printf("%d\n", ko);
    // printf("%d\n", fac(5));

    return 0;
}


/* here is soem info about "etern int sum " that just simply
 means that if you write it in any scope it will take 
 the global value of "Sum variable" It will not take the local value of "sum " */