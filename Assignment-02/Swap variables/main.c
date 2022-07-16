//A program to swap values of two int variables.

#include <stdio.h>

int main()
{
   int x,y,s;

   printf("Enter the value of x: ");

   scanf("%d",&x);

   printf("\nEnter the value of y: ");

   scanf("%d",&y);

   s=x;x=y;y=s;

   printf("\nSwapped values are: x=%d and y=%d.\n",x,y);
   return 0;
}
