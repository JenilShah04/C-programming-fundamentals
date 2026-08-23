#include <stdio.h>
int main()
{
    int GS;
    float NS,D;
    printf("Enter the gross sales:");
    scanf("%d",&GS);
    if (GS>20000)
    {
        D = GS*15.0/100.0;
        NS = GS - D;
        printf("The net sales is %.2fRs.",NS);
    }
    else if (GS>10000)
    {
        D = GS*10.0/100.0;
        NS = GS - D;
        printf("The net sales is %.2fRs.",NS);
    }
    else
    {
        D = GS*5.0/100.0;
        NS = GS - D;
        printf("The net sales is %.2fRs.",NS);
    }
    return 0;

}
