#include <stdio.h>
int main()
{
    int dollar,rupees;
    float pound;
    printf("Enter amount in Dollar:\n");
    scanf("%d",&dollar);
    rupees = dollar*48; //Given: 1$=48rs. 1 pound = 70Rs.
    pound = rupees/70.0; // shortcut : pounds = (dollars*48)/70
    printf("%d amount in Dollar = %f amount in Pounds\n",dollar,pound);
    return 0;
}
