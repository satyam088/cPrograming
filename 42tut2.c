#include <stdio.h>
#include <string.h>

int func1(int b){
    static int myvar = 0; // or static int myvar ;  If you don't intialize the value it will consider as 0 ;;;;;
    printf("The value of myvar is %d\n",myvar);
    myvar++ ;
    return 0;
}
int main()
{
    int b;
    int val = func1(b);  
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
    int *ptr = &val;
    return 0;
}