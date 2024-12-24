#include <stdio.h>

int main()

{
    int num;

    printf("Enter your mobile number \n");
    scanf("%d", &num);
    if (sizeof(num) == 10)
    {
        printf("Your number is %d\n", num);
    }
    else
    {
        printf("please enter a valid number\n");
    }
}