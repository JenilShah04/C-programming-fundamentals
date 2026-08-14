#include <stdio.h>
int main()
{
    int rupees;
    float dollar;
    printf("Enter Rupees:\n");
    scanf("%d",&rupees);
    dollar = rupees/48.0;  //As 1$=48Rs. Given
    printf("%d Rupees = %f Dollars\n",rupees,dollar);
    return 0;
}
