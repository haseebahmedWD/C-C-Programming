#include<stdio.h>

int main()
{
    int num, temp = 0;
    double div = 0;
    //program to check whether number is divisible by 5 or not
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num % 5)
    {
        printf("%d is not divisible by 5 \n",num);
    }
    else
    {
        printf("%d is divisible by 5 \n", num);
    }
    printf("**************************************** \n");

    //program to check whether number is even or odd
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num % 2)
    {
        printf("%d is odd \n",num);
    }
    else
    {
        printf("%d is even \n", num);
    }
    printf("**************************************** \n");
    //program to check whether number is even or odd without using % operator
    printf("Enter a number: ");
    scanf("%d",&num);
    div = num / 2.0;    //divide the integer number with decimal value and store answer in decimal value
    temp = div;         // storing as integer value (without decimal)
    div = div - temp;   // subtracting integer from decimal value and result will be greater than 0.0 or equal to 0.0
    if (div == 0)   //  0.0 IS SAME AS 0
    {
        printf("%d is Even \n",num);
    }
    else
    {
        printf("%d is Odd \n",num);
    }
    
     printf("**************************************** \n");


    //write a program to swap two integer variables without using third
    int num1 = 0;
    int num2 = 0;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("first number is %d second number is %d \n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Numbers Swapped \n");
    printf("first number is %d second number is %d \n", num1, num2);
    printf("**************************************** \n");

    //Write a program to get last digit of a number
    printf("Enter a number to get its last digit ");
    scanf("%d",&num);
    num = num % 10;
    printf("Last digit is: %d \n",num);
    return 0;
}
