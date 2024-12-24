#include <stdio.h>
int main()
{
    int a;
    printf("If you pass in math press 1\n");
    printf("If you pass in English press 2\n");
    printf("If you pass in Math and English Both press 3\n");
    scanf("%d", &a);
    if(a==1){
        printf("Because you only pass in math so you get 15 RS as price\n");
    }else if(a==2){
        printf("Because you only pass in English so you get 15 RS as price\n");
    }else if(a==3){
        printf("Because you only pass in Both subject  so you get 45 RS as price\n");
    }else{
        printf("Bhadwe 1 2 3 me se kuch type kar ");
    }
    return 0;
}