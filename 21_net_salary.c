#include <stdio.h>
int main()
{
    int G;
    float NS,A,D;    //NS:Net salary,G:Gross salary,A:Allowance,D:Deduction
    printf("Enter the gross salary: ");
    scanf("%d",&G);
    A = G*10.0/100;
    D = G*3.0/100;
    NS = G+A-D;
    printf("The net salary is %.2fRs.",NS);
    return 0;

}
