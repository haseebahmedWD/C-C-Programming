#include<stdio.h>
#include<stdlib.h>
int main()
{
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
    
    
    return 0;
}
