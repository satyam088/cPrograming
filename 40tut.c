#include <stdio.h>
#include <string.h>
void revstr(char arr[])
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[8 - i];
        arr[8 - i] = temp;
    }
}

int main()
{
    char arr[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    printf("%s\n", arr);
    revstr(arr);
    printf("%s", arr);

    return 0;
}