#include <stdio.h>
#include<string.h>
 
 typedef  struct driver
     {
        char name[34];
        int lN;
        char add[34];
        int km;
     } di;
int main()
{
    int n;  
        printf("How many Driver You want to store in data Base\n");
        scanf("%d",&n);
            di drivers[n];

     for (int i = 0; i < n ; i++)
     {
        printf("Enter the name of %d Driver\nEnter the Licence number of the driver\nEnter the Address of Driver\nEnter the Kms that much Driver has driven \n", i +1);
        scanf("%s",drivers[i].name);
        scanf("%d",&drivers[i].lN);
        scanf("%s",drivers[i].add);
        scanf("%d" ,&drivers[i].km);
        
     }
     printf("\nDriver Information:\n");
      for(int i = 0 ;i < n ; i++){

            printf("Driver : %d\n", i+1);
            printf("Name : %s\n",drivers[i].name);
            printf("Driver Licence Number : %d\n" ,drivers[i].lN);
            printf("Driver address : %s\n" ,drivers[i].add );
            printf("The Number of Km driver has driven %d\n",drivers[i].km);
      }
     
     return 0 ;
}