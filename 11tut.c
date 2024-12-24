#include <stdio.h>
int main()
{
  int k,l;
  printf("enter your Age\n");
  scanf("%d", &k);

  printf("enter your Marks\n");
  scanf("%d", &l);

  switch (k){
        case 2:
            printf("Your age is 2\n");
            switch (l)
            {
            case 45:
                printf("your marks is 45");
                break;
            
            default:
            printf("your marks is not 45");
                break;
            }
                break;
        case 13:
            printf("Your age is 13");
            break;
        case 23:
            printf("Your age is 23");
                break;

        default:
        printf("Age is not 3, 13, 23");
            break;

  }
    return 0;
}