#include<stdlib.h>
#include<stdio.h>
// write a program to print first natural numbers using recursion
void displayNum(int num)
{
    if (num == 1)
    {
       printf(" %d ",num);
    }
    else
    {
        displayNum(num-1);
        printf(" %d ",num);
    } 

}
// write a program to display and calculate factorial of n numbers
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        printf("x %d ",num);
        return num * factorial(num - 1);
    }
    
}
int main()
{
    int range = 0;
    printf("Enter number to print natural numbers: ");
    scanf("%d",&range);
    displayNum(range);
    printf("\n **************************************** \n");
    printf("Enter number to print factorial: ");
    scanf("%d",&range);
    printf(" %d! = ",range);
    printf(" = %d  ",factorial(range));
    printf("\n **************************************** \n");
    return 0;
}
