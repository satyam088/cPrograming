#include <stdio.h>
// Why is recursion not always good ?
int fibo(int n){
    int a = 0 ;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a+ b;
        a = b -a;
    }
    return a;
}
int main()
{
    int num;
    printf("ENter the index of you want fibonacci number  of :\n");
    scanf("%d", &num);
    printf("The fibonacchi number of index %d is %d :", num , fibo(num));
    return 0;
}