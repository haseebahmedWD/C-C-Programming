#include<stdio.h>
#include<stdlib.h>
int main()
{
    //write a program to find LCM of two numbers (my method)
    int a,b,temp = 0;
    printf("Please enter two numbers: ");
    scanf("%d %d",&a,&b);
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((b*j) == (a*i))
            {
                temp = a * i;
                printf("LCM is: %d \n",temp);
                break;
            }
        }
        if (temp != 0)
        {
            break;
        }
        
    }
    
    // write a program to find lcm of a number (Sir Method)
    int k,f,L;
    printf("Please enter two numbers: ");
    scanf("%d %d",&k,&f);
    for (L= k>f ?k:f; L <= a*b; L++)
    {
        if (L % k == 0 && L % f == 0)
        {
            break;
        }
    }
    printf("LCM of two numbers is: %d \n",L);
    return 0;
}
