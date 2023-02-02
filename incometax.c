#include <stdio.h>
int main()
{
int n;
double item[50], total, discount;
// Ask the user to enter the number of items purchased
printf("Enter the number of items purchased: ");
scanf("%d", &n); // Code by Suyash
// Ask the user to enter the price of each item
printf("\nEnter the price of each item:\n");
for (int i = 0; i < n; i++) {
printf("Item %d: ", i + 1);
scanf("%lf", &item[i]);
}
// Calculate the total amount of purchase
total = 0;
for (int i = 0; i < n; i++) {
total += item[i];
}
// Calculate the discount based on the following conditions
if (total > 5000)
discount = total * 0.1;
else if (total > 3000) // Code by SUYASH
discount = total * 0.07;
else
discount = total * 0.05;
// Print the total amount of purchase and discount
printf("\nTotal amount of purchase: %.2lf", total);
printf("\nDiscount: %.2lf\n", discount);
return 0;
}