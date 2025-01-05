/// Solution of extersie 8 from 48tut.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int ch, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d :enter the number of chracters in your employee \n ", i+1);
        scanf("%d",&ch);
        getchar();
        printf("Enter the value of a :\n");
        scanf("%c",&a);
        getchar(); 
        printf("Enter the value of b :\n");
        scanf("%c",&b);
        ptr = (char *) malloc((ch+1)*sizeof(char));
        printf("Input the emplyee Id : ");
        scanf("%s", ptr);
        printf("Your Employe id is %s\n", ptr);
        free(ptr);
        i++;
    }

    return 0;
}