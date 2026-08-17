#include <stdio.h>
int main()
{
    float NS,GS, D;
    printf("Enter the gross sales:");
    scanf("%f",&GS);
    D = GS*10.0/100.0;
    NS = GS - D;
    printf("The net sales is %.3f",NS);
    return 0;
}
