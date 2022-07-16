#include<stdio.h>
int main()
 {
     float I,D,r;
   printf("Enter the Indian ruppee: ");
   scanf("%f",&I);
   r=1/76.23;
   D=r*I;
   printf("%.2f IR = %.4f USD ",I,D);

   return 0;
 }
