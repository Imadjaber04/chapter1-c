#include <stdio.h>

int main(void)
{


float x  , total ;

printf("Enter the value of x: ");
scanf("%f" , &x);

total=  (((( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6 ; 

printf("The result is %.2f \n", total);

return 0;

}

