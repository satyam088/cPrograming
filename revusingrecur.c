#include <stdio.h>

int rev(int num){
    int i ;
    i = num%10;
    num = num/10;
    return i;
    rev(num);
}
int main(){
    int num ;
    printf("enter the number you want to reverse : \n");
    scanf("%d",&num);
    rev(num);
    return 0;
}