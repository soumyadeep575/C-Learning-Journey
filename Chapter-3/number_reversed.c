#include <stdio.h>

int main(void)
{
    int j,k,l,i;
    printf("Enter a two digit number: ");
    scanf("%d",&i);
    k=i%10;
    j=i/10;
    l=(k*10)+j;
    printf("The reversal is: %02d\n",l);
    return 0;
}