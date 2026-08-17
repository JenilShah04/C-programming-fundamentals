#include <stdio.h>
int main()
{
    int L,B,A,P;
    printf("Enter the lenght of Rectangle:");
    scanf("%d",&L);
    printf("Enter the breadth of Rectangle:");
    scanf("%d",&B);
    A = L*B;
    P = 2*(L + B);
    printf("Area of Rectangle:%d\n",A);
    printf("Perimeter of Rectangle:%d",P);
    return 0;
}
