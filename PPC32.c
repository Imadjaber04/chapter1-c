#include <stdio.h>

int main(void)
{


int item_number;
int day, month, year;
float price;

printf("Enter item number: ");
scanf("%d", &item_number);

printf("Enter unit price: ");
scanf("%f", &price);

printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &day, &year);



printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%7.2f\t%.4d/%.2d/%.2d\n", item_number, price, year, month, day);

return 0;

}

