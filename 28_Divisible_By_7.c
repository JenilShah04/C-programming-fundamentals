#include <stdio.h>
int main()
{
    int A;
    printf("Enter the value of A:");
    scanf("%d",&A);
    if (A%7==0)
    {
        printf("Great! The number is divisible by 7");
    }
    else
    {
        printf("Oops! The number is not divisible by 7");
    }
    return 0;
}
