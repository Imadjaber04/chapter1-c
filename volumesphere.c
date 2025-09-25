/*Calcul of the volume of a sphere*/


#include <stdio.h>

#define PI 3.14159f

int main(void)
{
 
float v, r ;

printf("Enter the radius of the sphere: ");
scanf( "%f" , &r );

v= (4.0f /3.0f ) * PI * r * r * r ;


printf("the volume is: %.2f cubic meters \n", v );

return 0;
}
