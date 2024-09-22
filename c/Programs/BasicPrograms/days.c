// write a program to input days and return year, weeks and days
#include<stdio.h>
int main(){
    int num_days, days, years, months, weeks;
    printf("Enter number of days: ");
    scanf("%d",&num_days);
    printf("Total Days: %d \n",num_days);
    //convert total days into years, months, weeks and days
    years = num_days / 365;
    months = (num_days % 365)/30;
    weeks =  (num_days % 365)/7;
    days = num_days - ((years * 365)+(months * 30));
    printf("%d years - %d months - %d weeks - %d days \n",years,months,weeks,days);
}