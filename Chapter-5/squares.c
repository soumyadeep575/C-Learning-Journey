#include <stdio.h>

int main(void)
{
    printf("This program prints a table of squares.\n");
    int number, square,i;
    i=1;
    printf("Enter number of entries in table: ");
    scanf("%d", &number);

    while (i <= number)
    {
        square=i*i;
        printf("%10d%10d\n", i, square);
        i++;
    }
}