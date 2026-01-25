#include <stdio.h>

int main(void)
{
    printf("This program sums a series of integers\n");
    int integer,sum;
    integer=1; //Just giving the integer variable a random non zero value to get the loop started. 
    sum=0;
    printf("Enter integers (0 to terminate): ");
    while (integer != 0)
    {
        scanf("%d", &integer);
        sum+=integer;
    }
    printf("The sum is: %d\n", sum);
}