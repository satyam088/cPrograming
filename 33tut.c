#include <stdio.h>
void starpattern(int rows)
{
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               printf("*");
          }
          printf("\n");
     }
}
void restarpattern(int rows)
{
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j <= rows - i - 1; j++)
          {
               printf("*");
          }
          printf("\n");
     }
}
int main()
{
     int rows, ops;
     printf("Press 0 for upper triangle\nPress 1 for Lower star Triangle\n");
     scanf("%d", &ops);
     printf("How many rows do you want ? \n");
     scanf("%d", &rows);
     if (ops == 0)
     {
          starpattern(rows);
     }
     else if (ops == 1)
     {
          restarpattern(rows);
     }
     else
     {
          printf("Please enter a valid number.\n");
     }
     return 0;
}