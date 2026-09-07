#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter a Number:");
    scanf("%d",&i);
    printf("The First %d Natural Numbers:\n",i);
    for(j=1;j<=i;j++)
    {
        printf("%d\n",j);
    }
    return 0;
}
