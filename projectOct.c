// #include <stdio.h>
// #include <math.h>

// void ops1(){
//     int arr[34];
//     int base , ans;
//     float value ;
//     printf("enter the Number \n");
//     scanf("%f",&value);
//     printf("Enter the base number you want to change in :\n");
//     scanf("%d",&base);
//     while(fmodf(value,base) <0){
//         arr[] = fmodf(value , base);
//     }
// }
// int main()
// {
//      ops1();
//      return 0 ;
// }




#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32]; // Array to store binary number
    int i = 0;
    
    // Iterate through the decimal number and convert to binary
    while (decimal > 0) {
        binary[i] = decimal % 2; // Store remainder (0 or 1)
        decimal /= 2;            // Divide the number by 2
        i++;
    }

    // Display the binary number in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;
    
    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    // Call function to convert and display binary number
    decimalToBinary(decimal);
    
    return 0;
}
