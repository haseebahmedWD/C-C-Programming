#include<stdio.h>
#include<stdlib.h>
int main()
{
    //write a program to take input and check whether number is prime or not
    int num, i = 0;
    
    printf("Enter a prime number: ");
    scanf("%d",&num);
    for (i = 2; i <= num-1; i++)
    {
        if ( num % i == 0)
        {
            break;
        }    
    }
    if (i == num)
    {
        printf("%d is prime! \n", num);
    }
    else
    {
        printf("%d is not prime! \n", num);
    }
    
    // write a program to print prime numbers with range
    int range, j = 0;
    printf("Enter range to print prime numbers: ");
    scanf("%d",&range);
    for (i = 2; i <= range; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }  
        }
        if (i == j)
        {
            printf(" %d ",i);
        } 
    }
    
    return 0;
}
