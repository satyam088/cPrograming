#include <stdio.h>
#include <string.h>

struct student
{
    char name[24];
    char fav_char;
    int rollNo;
    float mark;
}; // satyam king; you can declare like this also in struct....
struct student satyam, king;

int main()
{
    struct student satyam = {"Satyam Chauhan", 'A', 2414215, 87.4};
    printf("Satyam Got %f marks in 12th\n ", satyam.mark);
    printf("Satyam Fav Character is %c \n", satyam.fav_char);
    printf("Satyam ID is %d \n", satyam.rollNo);
    strcpy(satyam.name, "Student of the Year");
    printf("Satyam full name is %s \n", satyam.name);
    king.rollNo = 696969;
    printf("The Id of King is %d", king.rollNo);

    return 0;
}