#include <stdio.h>

int main(void)
{
    int a,b,k,sum_odd,sum_even;
    sum_odd=0;
    sum_even=0;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&a,&b,&k);
    
    sum_odd+=a;

    int c=b%10;
    sum_even+=c;
    int d=b/10;
    int e=d%10;
    sum_odd+=e;
    int f=d/10;
    int g=f%10;
    sum_even+=g;
    int h=f/10;
    int i=h%10;
    sum_odd+=i;
    int j=h/10;
    sum_even+=j;

    int l=k%10;
    sum_odd+=l;
    int m=k/10;
    int n=m%10;
    sum_even+=n;
    int o=m/10;
    int p=o%10;
    sum_odd+=p;
    int q=o/10;
    int r=q%10;
    sum_even+=r;
    int s=q/10;
    sum_odd+=s;

    printf("%d\n",sum_even);
    printf("%d\n",sum_odd);

    int sum=(sum_odd*3)+sum_even;
    int remainder=(sum-1)%10;
    int check_digit=9-remainder;

    printf("Check Digit is: %d\n",check_digit);
}