//Program to print size of an int, a float, a char and a double type variable

#include <stdio.h>
 int main()
   {
       int x; char c; float f; double d1;
       printf("The size of int type variable is: %d",sizeof(x));
       printf("\nThe size of char type variable is: %d",sizeof(c));
       printf("\nThe size of float type variable is: %d",sizeof(f));
       printf("\nThe size of double type variable is: %d",sizeof(d1));
       return 0;
   }

