#include <stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&F);
    C = 5.0/9.0*(F-32);
    printf("%f Fahrenheit = %f Celcius\n",F,C);
    return 0;
}
