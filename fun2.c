// #include <stdio.h>
// int main()
// {
//     char name[4][50] = {"Satyam", "Vikrant", "Ranvijay", "RamKisan"};
//     int mark[4] = {92, 45, 43, 74};
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf(" %c got %d marks in Test\n", *name[i][50], mark[j]); 
//         }
//     }
// }





#include <stdio.h>
int main()
{
    char *name[4] = {"Satyam", "Vikrant", "Ranvijay", "RamKisan"};
    int mark[4] = {92, 45, 43, 74};
    for (int i = 0; i < 4; i++)
    {
        printf(" %s got %d marks in Test\n", name[i], mark[i]); 
        
    }
}