#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter the temperature in celcius:");
    scanf("%f",&C);
    F = (9.0/5.0*C)+32;
    printf("%f celcius =%f fahrenheit\n",C,F);
    return 0;
}
