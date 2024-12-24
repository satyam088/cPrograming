#include <stdio.h>
int main()
{
    int i, age, j;
    for (i = 0; i < 10; i++)
    {
        printf("%d Enter your Age :\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
    }
    printf("Put any number smaller than 10\n");
    scanf("%d",&j);
    while(j<20){
        printf("%d\n",j);
        j++;
        
        if(j>10){
        
            continue;
        }
        printf("You are a Good Boy\n");
    }
    return 0;
}