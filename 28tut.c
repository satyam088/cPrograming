#include <stdio.h>
int fibo_recursive(int n){
    if(n==1||n==2){
        return n -1;
    }else{
        return fibo_recursive(n-1) + fibo_recursive(n-2) ;
    }
}

int fibo_iterative(int n){
    int a = 0;
    int b = 1;
    for (int i =0; i < n-1; i++)
    {
        b = a+b; // 1 for iteration 1
        a = b-a ; //1 for iteration 1
    }
    
    return a ;
}

int main()
{
    int num;
    printf("Enter the index number to get  Fibonacci number of : \n");
    scanf("%d",&num);
    printf("The value of Fibonacci number of position no %d using Recorsive %d \n ", num ,fibo_recursive(num));
    printf("The value of Fibonacci number of position no %d using Iterative %d \n", num ,fibo_iterative(num));
     
     return 0 ;
}