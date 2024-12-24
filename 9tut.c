#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a = 9;
    const float b = 3.44;
    //  b = 7.22;// can't do that since b is const
    printf("The value of a is %d and the value of b is %4.9f\n", a ,b);
    printf("%d",PI);

    return 0;
}
