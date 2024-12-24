#include <stdio.h>
#include <string.h>

void rev(char *string)
{
    int length = strlen(string);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end)
    {
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char string1[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    printf("%s\n", string1);
    rev(string1);
    printf("%s\n", string1);

    return 0;
}