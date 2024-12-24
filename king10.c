#include <stdio.h>
main()
{
    int a;
    printf("Please enter a number\n");
    scanf("%d",&a);
        if(a>0){
        printf("a is a positive number");
    }else if (a<0){
        printf("a is a nigative number");
    }else{
        printf("Bhadwe 0 kyu daal rha he ");
    }
    return 0;
}