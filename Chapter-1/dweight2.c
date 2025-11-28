#include <stdio.h> 

int main(void)
{
    float height, width, length;
    printf("Enter the height: ");
    scanf("%f", &height);
    printf("Enter the width: ");
    scanf("%f", &width);
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Dimensional Weight of the box is: %f\n", (height*width*length)/166.0);
    return 0;
}