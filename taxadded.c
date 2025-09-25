//Program that asks a user to add an amount, then display the amount with 5% taxe added

#include <stdio.h>

int main(void)
{
 
   float amount, tax_rate = 0.05f , final_amount;
  
  printf("Enter an amount: ");
  scanf("%f", &amount);
 

final_amount  = amount + tax_rate * amount ;


printf("With Tax added: %.2f \n", final_amount );

return 0;
}


