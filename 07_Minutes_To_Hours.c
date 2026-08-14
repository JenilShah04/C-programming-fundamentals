#include <stdio.h>
int main()
{
    int min;
    float hour;
    printf("Enter Minutes:\n");
    scanf("%d",&min);
    hour = min/60.0;
    printf("%d Minutes = %f Hours\n",min,hour);
    return 0;
}
