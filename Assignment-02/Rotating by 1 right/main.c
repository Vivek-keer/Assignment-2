#include <stdio.h>
int main()
{
     int x,d;
   printf("Enter three-digit number: ");
   scanf("%d",&x);
   d=x%10*100+x/10;
   printf("\n Rotating the digit by 1 towards right gives %d ",d);
   return 0;
}


