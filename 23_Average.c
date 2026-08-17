#include <stdio.h>
int main()
{
    int S1,S2,S3,T;
    float A;
    printf("Enter the marks of 1st Subject:");
    scanf("%d",&S1);
    printf("Enter the marks of 2nd Subject:");
    scanf("%d",&S2);
    printf("Enter the marks of 3rd Subject:");
    scanf("%d",&S3);
    T = S1+S2+S3;
    printf("The total marks of three subjects is %d\n",T);
    A = T/3.0;
    printf("The average marks of three subjects is %.2f",A);
    return 0;
}
