//Check weather number is odd or even using bitwise operator.

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("\n Given Number is: ");
    y=x%10; //Taking unit number only as Odd and even can be find by seeing only last digit//
    if(y&1)
 {
        printf("Odd");
    }
    else
        {
            printf("Even");
        }
               return 0;
}
