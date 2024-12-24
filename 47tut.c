#include <stdio.h>
#include <stdlib.h> // Calloc,relloc ,malloc ,free
int main()
{
    // use of malloc
    int *ptr;
    int n;
    // printf("Enter the size of array you want to create :");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n", i+1);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value no %d of this array is %d \n", i + 1, ptr[i]);
    // }


    // Use of Calloc()


    printf("Enter the size of array you want to create :");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value no %d of this array is %d \n", i + 1, ptr[i]);
    }


    // Use of realloc()



    printf("Enter the size of the new array you want to create :");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value no %d of this array is %d \n", i + 1, ptr[i]);
    }

    free(ptr);


    return 0;
}