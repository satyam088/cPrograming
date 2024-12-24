#include <stdio.h>
#include <string.h>

union student {
    int id ;
    int marks;
    char fav_char  ;
    char name[32];
}; 

int main()
{
    union student s1;
    s1.id = 1; 
    s1.fav_char ='U' ;
    s1.marks = 45;
    strcpy(s1.name ,"Satyam");  

// only last one statement will run , else will gonna be curupt.....

    printf("The name is %s\n",s1.name);
    printf("The id is %d\n",s1.id);
    printf("The fav character is %c\n",s1.fav_char);
    printf("The marks  is %d\n",s1.marks);
    
    //  printf("%d , %d ,%d",sizeof(int) ,sizeof(float),sizeof(char));
     return 0 ;
}