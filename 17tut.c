#include <stdio.h>
 int main()
 {
    /*
    
    label:
        printf("We are inside label\n");
        goto end;
        printf("I am the King\n");

        goto label;

        end:
            printf("We are at the ENd");
            */
        
        int num;

    for( int i=0;i<10;i++){

        printf("Kya be dalle %d\n",i);

        for(int j=0;j<10;j++){

            printf("Enter 0 for exit loop %d\n",j);
            scanf("%d", &num);

            if(num==0){
                goto end;
            }
        }
    }
        
    end:
        printf("The Loop is End");

    return 0;
 }