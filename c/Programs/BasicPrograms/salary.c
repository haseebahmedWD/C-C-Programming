#include<stdio.h>
//write program that get employee ID, hours of work in month and hourly rate and return salary
int main()
{
    char ID[10];
    int hour;
    double rate, salary;
    printf("Enter employee ID: ");
    // fgets(ID,10,stdin);
    scanf("%s",ID);
    printf("Enter total hours worked: ");
    scanf("%d",&hour);
    printf("Enter per hour rate in $: ");
    scanf("%lf",&rate);
    salary = rate * hour;
    printf("%s salary = %.2f $\n",ID,salary);
}