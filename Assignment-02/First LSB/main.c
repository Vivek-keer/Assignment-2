//First LSB //
#include <stdio.h>

 int main()
 {
     int x,y,count=0;
     printf("Enter the number: ");
     scanf("%d",&x);
     do
    {
       count++;
       y=x&1;
       if(y)
        printf("\nPosition is %d",count);
       else x=x>>1;

    }
    while(y==0);
    return 0;
 }
