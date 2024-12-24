#include <stdio.h>
void printstr(char str[]){
     int i = 0;
     while(str[i] != '\0'){
          printf("%c\n",str[i]);
          i++;
     }
}
int main()
{
     // char str[] = {'S','A','T','Y','A','M','\0'};
     // char str[] = "Satyam";
     char str[34];
     gets(str); //work as scanf , gets help to take spaces also in array.
     printf("%s\n",str);
     printstr(str);
     puts(str); // work as printf
     
     return 0 ;
}