//Program to swap values of two int variables without using a third variable.

#include <stdio.h>

int main()
{
   int x,y;

   printf("Enter the value of x: ");

   scanf("%d",&x);

   printf("\nEnter the value of y: ");

   scanf("%d",&y);

   x=x+y;
   y=x-y;
   x=x-y;

   printf("\nSwapped values are: x=%d and y=%d.\n",x,y);
   return 0;
}
