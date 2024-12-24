#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a, b;
    a = 34;
    b = 6;
        if (a<50 && b<20)
    {
        printf("Nikal na laude\n");
    }else{
        printf("Chal na Chutiye\n");
    }
    
    printf("a + b = %d \n", a+b );
    printf("a - b = %d \n", a-b);
    printf("a * b = %d \n", a*b);
    printf("a / b = %d \n", a/b);
    printf("a reminder b = %d \n", a%b);

    return 0;
}
