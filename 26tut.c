#include <stdio.h>
int main()
{

    // Pointer 
    int a = 8;
    int *ptr = &a;
     printf("the address of a variable is %d\n", ptr);
     printf("The value of a variable is %d\n",*ptr);
     printf("The value of the Pointer is %d\n",&ptr );
     printf("THe address of a in hexa decimal is %x\n", ptr);

     // Null Pointer

     int *ptr2;
     int *ptr3 = NULL;
     printf("This address of some gabage is = %d\n",ptr2);
     printf(" It is a NUll Pointer =   %d\n", ptr3);
     
}