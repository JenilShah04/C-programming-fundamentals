#include <stdio.h>
int main()
{
    int i,j,sum=0;
    printf("Enter a Number:");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        sum=sum+j;
    }
    printf("The sum of %d Natural numbers:%d",i,sum);
    return 0;
}
