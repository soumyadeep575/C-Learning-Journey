/* A program which evaluates a polynomial */

#include <stdio.h>

int main (void)
{
    float x;
    printf("Value of x: ");
    scanf("%f", &x);
    float value= ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("The value is: %.2f\n", value);
    return 0;
}