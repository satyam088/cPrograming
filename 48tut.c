#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
    char *de;
    int n;
    int p;
    de = (char*) malloc(sizeof(char));
    printf("Enter the number of Employe you are saving ID of :");
    scanf("%d",&n);
    for(int i = 0; i<n ; i++){
        printf("How many character you want in %d Employee ID : " , i+1);
        scanf("%d",&p);
        de = (char*) realloc( de,(p+1)*sizeof(char));
         printf("Enter The Id of %d Employee :" ,i+1);
         scanf("%s",de[i]);
    }
    for(int i = 0; i<n ; i++){
        printf("The ID of %d Employee is %s \n" , i+1 ,de[i]);
    }
    free(de);
    return 0;
}
// Hello I am tried to do it but i am unable to do it I need somr kind of help or I don't know 
