// Write a C program that accepts three integers from the user and finds the second largest number among them.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    if ((num1 > num2 && num2 > num3) || (num1 < num2 && num2 < num3))
    {
        printf("Second Largest: %d \n",num2);
    }
    else if ((num2 > num3 && num3 > num1) || (num2 < num3 && num3 < num1))
    {
        printf("Second Largest: %d \n",num3);
    }
    else
    {
        printf("Second Largest: %d \n",num1);
    }
    
    
    return 0;
}
