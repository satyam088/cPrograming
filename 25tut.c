#include <stdio.h>

/* THis is the exersise threee , we made FIbonachi number calculter using recursion*/
int fibo(int n) 
{
    if (n == 1 || n == 2)
    {
        return n -1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2) ;
    }
}

int main()  
{
    int num;

    printf("Enter the number of you want of Fibonachi number: \n");

    scanf("%d", &num);

    printf("The fibonachi number of %d is %d \n", num, fibo(num));

    return 0;
}
