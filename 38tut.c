#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[24];
    char fav_char;
    int rollNo;
    float mark;
} std ;
int main()
{
    // typedef <privious_name> <alias_name>;
    std s1 ,s2;
    typedef int* intpointer;
    intpointer a,b;
    int c = 89;
    a = &c;
    b = &c;
    printf("THe address of c is %d \n" , a);

    s1.rollNo = 69 ;
    s2.rollNo = 96;
    //  typedef  unsigned long ul;
    //  typedef int integer ;
    //  ul l1 , l2, l3;
    //  integer a = 4;
    //  printf("The value of a is %d " ,a);

     printf("Both Id's is respectly %d and %d ", s1.rollNo , s2.rollNo);
     return 0 ;

}