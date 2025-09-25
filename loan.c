#include <stdio.h>

int main(void)
{
 
 float loan, interest_rate, monthly_payment;
 float monthly_interest_rate; 
 float p1 , p2 , p3;

printf("Enter amount of loan: ");
scanf("%f", &loan);

printf("Enter interest rate: ");
scanf("%f",&interest_rate);

printf("Enter monthly payment: ");
scanf("%f", &monthly_payment);


monthly_interest_rate = interest_rate / 1200 ;

p1 = loan + (loan * monthly_interest_rate) - monthly_payment ;

p2 = p1 + ( p1 * monthly_interest_rate) - monthly_payment ;

p3 = p2 + ( p2 * monthly_interest_rate) - monthly_payment ;


printf("Balance remaining after first payment: %.2f\n", p1);
printf("Balance remaining after second payment: %.2f\n", p2);
printf("Balance remaining after third payment: %.2f\n", p3);

return 0;

}
 
