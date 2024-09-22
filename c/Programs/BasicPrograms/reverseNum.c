// write a program to reverse a number
#include<stdio.h>
int main()
{
    int num, remainder, result;
    double n2;
    printf("Enter a 5 digit number: ");
    scanf("%d",&num);
    printf("Number: %d \n",num);
    for (int i = 0; i < 5; i++)
    {
        remainder = num % 10;
        num = num / 10;
        result = (result * 10) + remainder;
    }
    printf("Reverse: %d \n",result);
    
   
}