#include <stdio.h>
int main()
{
    int grams;
    float kg;
    printf("Enter the weight in Grams:\n");
    scanf("%d",&grams);
    kg = grams/1000.0;
    printf("%d Grams = %f Kilograms\n",grams,kg);
    return 0;
}
