#include <stdio.h>
 int main()
 {
     int x;
   printf("Enter the value: ");
   scanf("%d",&x);
   printf("\n Making last digit of number \'%d\' as Zero: %d \n", x,x/10*10);
   return 0;
 }
