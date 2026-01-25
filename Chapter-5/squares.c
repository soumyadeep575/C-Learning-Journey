#include <stdio.h>

int main(void)
{
    printf("This program prints a table of squares.\n");
    int number, square,i;
    printf("Enter number of entries in table: ");
    scanf("%d", &number);

    for (i=1; i <= number; i++)
    {
        square=i*i;
        printf("%d%10d\n", i, square);
    }
}