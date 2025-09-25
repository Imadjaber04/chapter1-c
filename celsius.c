/* Converts a Fahrenheit temperature to Celsuis */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0)

int main(void)
{
 float fahrenheit, celsuis;

 printf("Enter Fahrenheit temperature: ");
 scanf("%f", &fahrenheit);
celsuis = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
printf("Celsuis equivalent: %.1f\n", celsuis);
return 0;
}

