#include<stdio.h>
int main()
{
    //write a program to print alphabet pattern
    char c;
    int steps;
    printf("Enter no. of steps: ");
    scanf("%d",&steps);
    for (int i = 1; i <= steps; i++)
    {
        c = 'A';
        for (int j = 1; j <= steps; j++)
        {
            if (j < i)
            {
                printf("   ");
            }
            else
            {
                printf(" %c ",c);
                c++;
            } 
        }
        c-=2;
        for (int k = 1; k <= steps-i; k++)
        {
            printf(" %c ",c);
            c--;
        }
        printf("\n");
    }
    printf("**************************************** \n");
    
    
    
    return 0;
}
