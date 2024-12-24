// Soultion of Exercise 7  Travel agency manager ;
#include <stdio.h>

 typedef struct dri
{
    char name[34];
    char  dlNo[34];
    char route[34];
    int kms;
} dr;

int main()

{   int i = 1;
    int n;
    printf("HOw many of drivers you are filling the information :");
    scanf("%d",&n);
     dr drivers[n];
     for(int i = 1; i<=n; i++){
        printf("Enter the deatails of %d dirver Driver :  \n Enter the Driving licence number of that driver : \n Enter the route of that driver : \n Enter the How many Kms Drievr Drives : \n" ,i);
        scanf("%s",drivers[i].name);
        scanf("%s",drivers[i].dlNo);
        scanf("%s",drivers[i].route);
        scanf("%d",drivers[i].kms);
     }
     for (int  i= 0; i < n; i++)
     {
        printf("%s\n",drivers[i].name);
        printf("%s\n",drivers[i].dlNo);
        printf("%s\n",drivers[i].route);
        printf("%d\n",drivers[i].kms);
     }
     
     return 0 ;
}