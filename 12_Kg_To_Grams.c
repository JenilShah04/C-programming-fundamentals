#include <stdio.h>
int main()
{
    int kg,grams;
    printf("Enter Weight in Kg:");
    scanf("%d",&kg);
    grams = kg*1000;
    printf("%d Kg = %d Grams\n",kg,grams);
    return 0;
}
