#include <stdio.h>
int main()
{
    char input;
    float kmToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second ;

    while (1)
    {
        printf("Enter the input q to quit. \n  1. Km to Miles \n 2. Inches to Foot \n 3. CMs to Inches \n 4. Pounds to Kilogram \n 5. Inches to meter \n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the Program.....");
            goto end;
            break;

        case '1':
        printf("Enter the Quantity in terms of first unit \n");
    scanf("%f",&first);
        second = first * kmToMiles;
            printf("%f Km is equal to %f miles \n \n \n", first, second);
            break;

        case '2':
        printf("Enter the Quantity in terms of first unit \n");
    scanf("%f",&first);
         second = first * inchesToFoot;
            printf("%f Inches is equal to %f Foot \n \n \n", first, second);

            break; 

        case '3':
        printf("Enter the Quantity in terms of first unit \n");
    scanf("%f",&first);
         second = first * cmToInches;
            printf("%f Cms is equal to %f  Inches \n \n \n", first, second);
            break;

        case '4':
        printf("Enter the Quantity in terms of first unit \n");
    scanf("%f",&first);
         second = first * poundToKgs;
            printf("%f Pounds is equal to %f Kilogram \n \n \n", first, second);
            break;

        case '5':
        printf("Enter the Quantity in terms of first unit \n");
    scanf("%f",&first);
         second = first * inchesToMeters;
            printf("%f Inches  is equal to %f Meter \n \n \n", first, second);
            break;

            default:
            break;
        }
    }
end:
    return 0;
}