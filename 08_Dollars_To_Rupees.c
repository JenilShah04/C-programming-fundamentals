#include <stdio.h>
int main()
{
    int dollar,rupees;
    printf("Enter Dollar:\n");
    scanf("%d",&dollar);
    rupees = dollar*48; //As 1$=48Rs. Given
    printf("%d Dollars = %d Rupees\n",dollar,rupees);
    return 0;
}
