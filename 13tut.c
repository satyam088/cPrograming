#include <stdio.h>
int main()
{
    int num, i = 0;
    printf("Write the number you want the table of:\n");
    scanf("%d", &num);
    do
    {
        i = i + 1;
        printf("%d\n", i * num);
    } while (i < 10);

    
    return 0;
}