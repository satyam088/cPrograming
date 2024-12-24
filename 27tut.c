// #include <stdio.h>
// int main()
// {
//      int a = 34;
//      char b = '2';
//      int *ptra = &a;
//      char *ptrb = &b;
//      printf("%d\n",ptra);
//      printf("%d\n",ptra + 1);
//      printf("%d\n",ptra++);
//      printf("%d\n",ptra - 1);
//     printf("%d\n", ptrb);
//     printf("%d\n", ptrb + 1);
//     printf("%d\n", ptrb - 1);
//      return 0 ;
// }




#include <stdio.h>
int main()
{
     int arr[] = {123,264,389,484,556,685,725,889,956,1089};
     printf("The value of position 1 is = %d\n", arr[1]);
     printf("The value of position 2 is = %d\n", arr[2]);
     printf("The value of position 3 is = %d\n", arr[3]);
     printf("The value of position 4 is = %d\n", arr[4]);
     printf("The value of position 5 is = %d\n", arr[5]);
     printf("The value of position 6 is = %d\n", arr[6]);
     printf("The value of position 7 is = %d\n", arr[7]);     
     printf("The address of position 1 in the array is = %d\n", &arr[0]);     
     printf("The address of position 1 in the array is = %d\n", arr);     
     printf("The adress of position 2 in the array is = %d\n", &arr[1]);     
     printf("The adress of position 2 in the array is = %d\n", arr + 1);     
     printf("The adress of position 3 in the array is = %d\n", &arr[2]);   


     printf("The Value at address of position 1 in the array is = %d\n", *(&arr[0]));     
     printf("The Value at address of position 1 in the array is = %d\n", *(arr));     
     printf("The Value at adress of position 2 in the array is = %d\n", *(&arr[1]));     
     printf("The Value at adress of position 2 in the array is = %d\n", *(arr + 1));     
     printf("The Value at adress of position 2 in the array is = %d\n", *(arr + 2));     
     printf("The Value at adress of position 3 in the array is = %d\n", *(&arr[2]));     
     printf("The Value at adress of position 3 in the array is = %d\n", arr[2]);     

     return 0 ;
}