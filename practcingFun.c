#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    start:
    printf("Type 1 to play the loop for 10 times\n");
    scanf("%d",&a);
    if(a==1){
        do{
            printf("Kya Be Dalle %d\n", a);
        a++;
        } while(a<11);
    }else{
        goto start;
    }

    start2:

    printf("Type number  1 to 10  , to make Case Statement Run\n");
    scanf("%d",&b);

    if(b>0&&b<11){
            switch(b){
            case 1:
                printf("You pressed 1 : \n Nikal laude \n");
                break;
            case 2:
                printf("You pressed 2 : \n Kya be bikhmangya \n");
                break;
            case 3:
                printf("You pressed 3 : \n Accha mereko sikhariya he  \n");
                break;
            case 4:
                printf("You pressed 4 : \n Juice pila do , musami ka juice pila do bahut garmi lag  rhi he \n");
                break;
            case 5:
                printf("You pressed 5 : \n SHer he kehde , Cheetah he Kehde \n");
                break;
            case 6:
                printf("You pressed 6 : \n Waah bete waah tum ro katiheavy driver nikle \n");
                break;
            case 7:
                printf("You pressed 7 : \n Thala For a Reason \n");
                break;
            case 8:
                printf("You pressed 8 : \n Satyam chuahan ek bekar insaan he  \n");
                break;
            case 9:
                printf("You pressed 9 : \n  Sacchi , sahi me , na me na manta\n");
                break;
            case 10:
                printf("You pressed 10 : \n Dekh kaise dekh rha , karu guddi lal \n");
                break;
            default:
                break;
        }
    }else{
        goto start2;
        
    }
    return 0;
}