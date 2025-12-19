#include <stdio.h>

int main(void)
{
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
    printf("Enter the first 12 digits of EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6);
    scanf("%1d%1d%1d%1d%1d%1d",&i7,&i8,&i9,&i10,&i11,&i12);
    int sum_even=i2+i4+i6+i8+i10+i12; 
    int sum_odd=i1+i3+i5+i7+i9+i11;
    int product=(3*sum_even)+sum_odd;
    int difference=product-1;
    int remainder=difference%10;
    int check_digit=9-remainder;
    printf("Check digit: %d\n",check_digit);
    return 0;
}