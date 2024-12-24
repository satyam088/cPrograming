#include <stdio.h>

int main()
{

    float h, w, area1, pera1;
    int ops;
    while (1)
    {
        printf("For getting the area of rectangle type 1 \n for getting the perameter of the rechtengle type 2 \n press 3 to exit \n Enter your Choice :");
        scanf("%d", &ops);
            if (ops == 1)
    {
        printf("please enter the the Height \n");
        scanf("%f", &h);
        printf("please enter the the weigth \n");
        scanf("%f", &w);
        area1 = h * w;
        printf("The area of the Rectangle according to the given values : %f", area1);
    }
    else if (ops == 2)
    {

        printf("please enter the the Height \n");
        scanf("%f", &h);
        printf("please enter the the weigth \n");
        scanf("%f", &w);
        pera1 = 2 * (h + w);
        printf("the Perameter of the rechtengle according ot given value is %f ", pera1);
    }
    else if (ops == 3)
    {
        printf("Exiting the Program....");
        break;
    }else {
        printf("Invalid statement please Try again\n");
    }
    }
return 0;

}
