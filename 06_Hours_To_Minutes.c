#include <stdio.h>
int main()
{
    int hours,min;
    printf("Enter Hours\n");
    scanf("%d",&hours);
    min = hours*60;
    printf("%d hours = %d Minutes\n",hours,min);
    return 0;
}
