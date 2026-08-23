#include <stdio.h>
int main()
{
    int A,B;
    printf("Enter the value of A:");
    scanf("%d",&A);
    printf("Enter the value of B:");
    scanf("%d",&B);
    if (A>B)
    {
        printf("A has largest value\n");
        printf("B has smallest value");
    }
    else if (B>A)
    {
        printf("B has largest value\n");
        printf("A has smallest value");

    }
    else
    {
        printf("The value of A and B is same");
    }
}
