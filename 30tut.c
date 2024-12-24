

// Exercise 4
/*
*
**
***
****
***** Triangular star patern
*****
****
***
**
*   Reverse Triangular star patern


*/

#include <stdio.h>
int main()
{
   char num;
   printf("Type 0 for Triangular star patern. \nType 1 for Reverse Triangular star patern .\n");
   scanf("%d", &num);
   
   if (num == 0)
   {
      printf("Triangular star patern : \n*\n**\n***\n****\n*****\n");
   }
   else if (num == 1)
   {
      printf("Reverse Triangular star patern : \n******\n****\n***\n**\n*");
   }
   else
   {
      printf("Please enter a valid number ");
   }
}