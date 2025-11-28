#include <stdio.h>
int main(void)
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    float volume=(4.0f/3.0f)*3.14159f*radius*radius*radius;
    printf("The volume is %f\n", volume);
    return 0;
}
