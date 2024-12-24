#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Type the number for Multipication Table:\n");
    scanf("%d", &num);
    printf("The table of number %d is given Below :\n", num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n" ,num, i, num * i);
    }
    return 0;
}
