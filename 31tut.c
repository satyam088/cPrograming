#include <stdio.h>
void swap(int *x ,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return ;
}
int main()
{
    int a,b;
    printf("type two number that you want to swap\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    printf("Actual numbers are %d and %d \n", a,b);
    swap(&a,&b);
    printf("After swapping the numbers %d and %d",a ,b);
    return 0;

}