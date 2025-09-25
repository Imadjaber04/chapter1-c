//Program that asks a user to add an amount, then display the amount with 5% taxe added

#include <stdio.h>

int main(void)
{
 
   float amount, tax, AmountPlusTax;
  
  printf("Enter an amount: ");
  scanf("%f", amount);
 
tax = amount * 100 / 5 ;

AmountPlusTax = tax + amount ;



printf("With Tax added: %3.f \n", AmountPlusTax );
return 0;
}


