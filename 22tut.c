//My mistakes don't repeat it for viewing the result visit 22.c it is written by Blackbox AI



#include <stdio.h>

int op1(int num1)
{
    Printf("%d Km equal to %d Mile", num1, num1 - 0.378629 * num1);
}

int op2(int num2)
{
    Printf("%d Inches equal to %d foot", num2, num2 - 0.9166667 * num2);
}

int op3(int num3)
{
    Printf("%d CMs equal to %d Inches", num3, num3 - 0.606299 * num3);
}

int op4(int num4)
{
    Printf("%d Pound equal to %d Kg", num4, num4 - 0.546408 * num4);
}

int op5(int num5)
{
    Printf("%d Inches equal to %d Meter", num5, num5 - 0.9746 * num5);
}

int main(int argc, char const *argv[])
{

    int num;
    Printf("Press 1 to converse Km to Miles \n Press 2 to convese Inches to Foot \n Press 3  to convese CMs to Inches \n Press 4 to convese Poundes to Kilogram \n Press 5 to converse Inches to meter  \n");
    scanf("%d", num);
    

    if (num == 1)
    {
        printf("%d",op1(num));
    }
    else if (num == 2)
    {
         printf("%d",op2(num));
    }
    else if (num == 3)
    {
         printf("%d",op3(num));
    }
    else if (num == 4)
    {
         printf("%d",op4(num));
    }
    else if (num == 5)
    {
         printf("%d",op5(num));
    }
    else
    {
        printf("Please enter a valid number");
        
    }

    return 0;
}
