#include <stdio.h>
#include <string.h>
int main()

     char string1[35];
     char string2[35];
     char string3[35];
     char string4[35];
     printf("Enter your First name: ");
     scanf("%s" ,&string1);
     printf("Enter your Second name: ");
     scanf("%s" ,&string2);
     printf("Your name is : %s\n " , string1 );
     printf("Your surname is : %s\n " , string2 );
    //   string3 = ( string1 , string2);
    strcpy(string3 ,strcat(string1 , string2));
    printf("Your full name is : %s\n", string3);
     strrev(string1);
     printf("Reversing your name  : %s\n " , string1 );
     strrev(string2);
     printf("Reversing your surname  : %s\n " , string2 );
     printf("The lengh of your name is   : %d\n " , strlen(string3 ));
     return 0 ;
