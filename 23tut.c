#include <stdio.h>

int main()
{
    int mark[2][4] = {{23, 45, 67, 87}, {21, 63, 94, 50}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of  i = %d and j = %d is %d \n", i, j, mark[i][j]);
        }
    }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d You want to store in array :\n ", i);
    //     scanf("%d", &mark[i]);
    // }
    // for (int i = 0; i < 4; i++){
    //     printf("The value of %d in the array : %d \n ", i, mark[i]);

    // }

    // mark[0]=34;
    // mark[1]=20;
    // mark[2]=98;
    // mark[3]=69;
    // printf("The mark of student 1 is : %d\n",mark[0]);
    // mark[0]=3469;
    // printf("The mark of student 1 is : %d\n",mark[0]);
    // return 0;
}