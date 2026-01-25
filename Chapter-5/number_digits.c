#include <stdio.h>

int main(void)
{
    int number, i;
    i=0;
    
    do{
        printf("Enter a nonnegative integer: ");
        scanf("%d", &number);
    }while (number < 0);
    
    do {
        number=number/10;
        i++;
    } while (number!=0);

    printf("The number has %d digit(s)\n", i);
}