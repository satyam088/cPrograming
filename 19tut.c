// With return value with return value

#include <stdio.h>
int sum(int a, int b);
void printstar(int n);
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The Sum is %d\n", c);
    printf("Hello world!\n");
    printstar(7);

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

// Without argument without retun value

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}