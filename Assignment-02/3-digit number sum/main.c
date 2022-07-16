//a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>


int main()
{
   int x,y,z,a;
   printf("Enter three digit number: ");
   scanf("%d",&x);
   y=x%10;
   z=x/10%10;
   a=x/100;
   printf("\n Sum of three digits number is: %d",y+z+a);
   return 0;
}
