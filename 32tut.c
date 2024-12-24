#include <stdio.h>
int func1(int arra[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, arra[i]);
    }
    arra[0] = 345;
    // array [0] = 382 ; // very important point that if you change any value here , it gets reflected in main()
    return 0;
}
void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) == 6532;
}

void func3(int array[5][5]){
    for ( int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d , %d is %d\n", i,j,array[i][j] );
        }
        
    }
    
}
int main()
{
    int arr[5][5] = {{10, 28, 39, 43, 56},{23,34,35,90,56}};
    printf("the value at index 0 is %d\n", arr[0]);
    // int avg = func1(arr);
    printf("the value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}