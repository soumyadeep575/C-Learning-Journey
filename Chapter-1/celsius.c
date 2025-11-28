/* Calculates the Celsius temperature from Fahrenheit */

#include <stdio.h>

#define x 5.0f
#define y 32.0f
#define z 9.0f

int main(void)
{
    float Fahrenheit;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f",&Fahrenheit);
    float Celsius=((Fahrenheit-y)*x)/z;
    printf("Celsius equivalent: %.1f\n",Celsius);
    return 0;
}