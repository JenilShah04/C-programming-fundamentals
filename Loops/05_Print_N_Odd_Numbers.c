#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter a Number:");
    scanf("%d",&i);
    printf("The First %d odd numbers:\n",i);
    for(j=1;j<=i;j=j+2)
    {
        printf("%d\n",j);
    }
    return 0;
}
