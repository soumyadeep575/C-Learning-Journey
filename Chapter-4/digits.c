#include <stdio.h>

int main(void)
{
    int number,digits, number_1;
    digits=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    number_1=number;
    if (number==0)
        digits=1;
    else{
    while (number_1 != 0)
    {
        digits++;
        number_1=number_1/10;
    }
}
    printf("The number %d has %d digits\n", number, digits);
}