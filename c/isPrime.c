#include<stdio.h>
int isPrimeFunction(int num)
{
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int n;
    while (n >= 0)
    {
        printf("Enter a number: ");
        scanf("%d",&n);
    if (isPrimeFunction(n))
    {
        printf("%d is prime number! \n",n);
    }
    else
    {
        printf("%d is not prime number! \n",n);
    }
    }
    
    return 0;
}
