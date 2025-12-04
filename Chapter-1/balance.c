#include <stdio.h>

int main(void)
{
    float amount,interest,monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f",&amount);
    printf("Enter interest: ");
    scanf("%f",&interest),
    printf("Enter the monthly payment: ");
    scanf("%f",&monthly_payment);
    
    float monthly_interest_1=(amount*(interest/100))/12;
    float balance_1=amount-(monthly_payment-monthly_interest_1);

    float monthly_interest_2=(balance_1*(interest/100))/12;
    float balance_2=balance_1-(monthly_payment-monthly_interest_2);

    float monthly_interest_3=(balance_2*(interest/100))/12;
    float balance_3=balance_2-(monthly_payment-monthly_interest_3);

    printf("Balance remaining after first payment: %.2f\n", balance_1);
    printf("Balance remaining after second payment: %.2f\n",balance_2);
    printf("Balance remaining after third payment: %.2f\n",balance_3);
}