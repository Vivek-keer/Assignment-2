//A program to print unit digit of a given number.
#include <stdio.h>
int main()
{
    int x,u;

    printf("Enter the number: ");

    scanf("%d",&x);

    u=x%10;

    printf("The Unit digit of number is:%d",u);

    return 0;
}
