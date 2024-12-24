#include <stdio.h>

int fac(int n){
    if(n ==0 || n ==1 ){
        return 1;
    }else{
        return (n * fac(n-1) ) ;
    }
}

int main()
{    int num ;
    printf("enter a number you want to find the factoriL OF : \n ");
    scanf("%d",&num);
    printf("%d is the factorial of %d",fac(num),num);
     return 0 ;
}