#include <stdio.h>
int main()
{
    int H,L;
    float A;
    printf("Enter the height of triangle:");
    scanf("%d",&H);
    printf("Enter the length of triangle:");
    scanf("%d",&L);
    A = H*L/2.0;
    printf("Area of triangle:%f",A);
    return 0;
}
