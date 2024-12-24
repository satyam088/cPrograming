#include <stdio.h>

void op1(int num1) {
    printf("%d Km equal to %f Mile\n", num1, num1 / 1.60934);
}

void op2(int num2) {
    printf("%d Inches equal to %f foot\n", num2, num2 / 12.0);
}

void op3(int num3) {
    printf("%d CMs equal to %f Inches\n", num3, num3 / 2.54);
}

void op4(int num4) {
    printf("%d Pound equal to %f Kg\n", num4, num4 / 2.20462);
}

void op5(int num5) {
    printf("%d Inches equal to %f Meter\n", num5, num5 / 39.37);
}

int main(int argc, char const *argv[]) {
    int num;
    printf("Press 1 to convert Km to Miles \n Press 2 to convert Inches to Foot \n Press 3 to convert CMs to Inches \n Press 4 to convert Pounds to Kilogram \n Press 5 to convert Inches to Meter  \n");
    scanf("%d", &num);

    if (num == 1) {
        int km;
        printf("Enter the value in Km: ");
        scanf("%d", &km);
        op1(km);
    } else if (num == 2) {
        int inches;
        printf("Enter the value in Inches: ");
        scanf("%d", &inches);
        op2(inches);
    } else if (num == 3) {
        int cms;
        printf("Enter the value in CMs: ");
        scanf("%d", &cms);
        op3(cms);
    } else if (num == 4) {
        int pounds;
        printf("Enter the value in Pounds: ");
        scanf("%d", &pounds);
        op4(pounds);
    } else if (num == 5) {
        int inches;
        printf("Enter the value in Inches: ");
        scanf("%d", &inches);
        op5(inches);
    } else {
        printf("Please enter a valid number\n");
    }

    return 0;
}