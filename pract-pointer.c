#include <stdio.h>
int main()
{
    int arr[] = {63,96,60,23,42,90} ;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    printf("%d\n",arr[5]);
    printf("the address of position 3 alliment is %d\n", &arr[2]);
    printf("the address of position 3 alliment is %d\n", *(&arr + 2));
    printf("the address of position 3 alliment is %d\n", *(arr));
    printf("the address of position 3 alliment is %d\n", arr[2]);
    printf("the address of position 3 alliment is %d\n", *(arr + 2));
    printf("the address of position 3 alliment is %d\n", (arr + 2));
     return 0 ;
}