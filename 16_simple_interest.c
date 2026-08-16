#include <stdio.h>
int main()
{
    float SI,P,R,T;
    printf("Enter the Principal amount:");
    scanf("%f",&P);
    printf("Enter the Rate of interest:");
    scanf("%f",&R);
    printf("Enter the timeperiod in years:");
    scanf("%f",&T);
    SI = P*R*T/100.0;
    printf("The simple interest of the given amount is %fRs.",SI);
    return 0;
}
