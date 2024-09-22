// Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, temp, sum;
    printf("Enter 5 digit number: ");
    scanf("%d",&num);
    temp = num;
    for (int i = 1; i <=5; i++)
    {
        rem = num % 10;
        num = num / 10;
        sum = (sum * 10) + rem; 
    }
    // printf("temp: %d \n",temp);
    // printf("sum: %d \n",sum);
    if (temp == sum)
    {
        printf("Yes it is palindrome! \n");
    }
    else
    {
        printf("Not Palindrome! \n");
    }
    
    return 0;
}
