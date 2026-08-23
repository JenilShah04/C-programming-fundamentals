#include <stdio.h>
int main()
{
    int GS;   //GS=Gross salary
    float NS,A,D;    //NS=Net salary, A=Allowances, D=Deduction
    printf("Enter the Gross Salary:");
    scanf("%d",&GS);
    if (GS>10000)
    {
        A = GS*10.0/100.0;
        D = GS*3.0/100.0;
        NS = GS+A-D;
        printf("The Net salary is %.f",NS);
    }
    else if (GS>5000)
    {
        A = GS*7.0/100.0;
        D = GS*2.0/100.0;
        NS = GS+A-D;
        printf("The Net salary is %.f",NS);
    }
    return 0;
}
