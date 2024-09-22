#include<stdio.h>
//write a program to calculate fuel average by given input is total distance, unit fuel price and total amount paid of fuel
int main()
{
int distance, totalAmount;
float unit_price, average;
printf("Enter distance covered: ");
scanf("%d",&distance);
printf("Enter total amount paid for fuel: ");
scanf("%d",&totalAmount);
printf("Enter unit price of fuel: ");
scanf("%f",&unit_price);

average = distance / (totalAmount / unit_price);
printf("Fuel average: %.2f km/liter \n",average);
}