#include <stdio.h>

int main(void)
{
 
 int amount , nbill_20 , nbill_10 , nbill_5 , nbill_1 ;

printf("Enter a dollar amount: ");
scanf("%d", &amount);

nbill_20 = amount / 20;

nbill_10 = (amount  -  nbill_20 * 20 ) / 10; 

nbill_5 = (amount  - (nbill_20 * 20)  -   (nbill_10 * 10)    )      /    5;

nbill_1 = (amount  - (nbill_20 * 20)  -   (nbill_10 * 10)  - (nbill_5 * 5)    )      /    1;


printf("$20 bills: %d\n", nbill_20);
printf("$10 bills: %d\n", nbill_10);
printf("$5 bills:  %d\n", nbill_5);
printf("$1 bills:  %d\n", nbill_1);

return 0;

}

