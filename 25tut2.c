/* In this Second part of 25tut.c we are gonna make a fibonachi number  calculater via using itereative apporch using for loop I guess .*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want of Fibonachi number\n");
    scanf("%d", &n);
    for (n > 2; n--;)
    {
        int num = (n - 1) + (n - 2);
        printf(" %d", num);
    }

    if (n == 1 || n == 2)
    {
        printf("1");
    }

    return 0;
}