#include <stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter Your First Number\n");
    scanf("%f",&a);
    printf("Enter Your Second Number\n");
    scanf("%f",&b);
    c = a+b;
    printf("Addition of %f+%f=%f\n",a,b,c);
    d = a-b;
    printf("Subtraction of %f-%f=%f\n",a,b,d);
    e = a*b;
    printf("Multiplication of %f*%f=%f\n",a,b,e);
    f = a/b;
    printf("Division of %f/%f=%f\n",a,b,f);
    return 0;


}
