// print prime numbers greater than 100 one row should have 20 prime numbers
#include<stdio.h>
int main()
{
    int range, i, j, counter;
    printf("Enter range (greater than 100) : ");
    scanf("%d",&range);
    for (i = 1; i <=range; i++)
    {
            for (j = 2; j < i; j++)
            {
            if (i % j == 0)
            {
                break;
            }
            }
        if (j == i)
        {
            printf(" %d ",i);
            counter+=1;
        } 
        if (counter == 10)
        {
            printf("\n");
            counter = 0;
        }
        
    }  
}

