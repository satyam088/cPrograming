#include <stdio.h>
#include <string.h>

int b = 34;
int func1()
{
    static int a = 5;
    a++;
    return a;
}
int func2(int b1){
    printf("The value of b inside func2 is %d\n",b);
    return b * 10;
}
int main()
{
    int b1 = 334;
    int val = func2(b1);
    int *ptr = &val;
    // int a = func1();
    // int a1 = func1();

    // printf("The number is %d\n", a);
    // printf("The number is %d\n", a1);
printf("The value is b inside main is %d\n",b1);
printf("The value is b after func2 is %d\n", func2(b1));
    return 0;
}




