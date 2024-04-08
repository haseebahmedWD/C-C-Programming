#include<stdio.h>
int main()
{
    //write a program to generate table 1-10
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d   ", i * j);
        }
        printf("\n");
    }
    printf("**************************************** \n");

    //(1st method ) write a program to print star pattern left downward
    for (int i = 6; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("**************************************** \n");

    //(2nd method) print star pattern left downward ( using a third loop)
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            printf(" * ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" - ");
        }
        
        printf("\n");
    }
    printf("**************************************** \n");
    // 3rd method print star pattern left downward ( if else without using third loop)
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j <= i)
            {
                printf(" * ");
            }
            else
            {
                printf(" - ");
            }
            
            
        }    
        printf("\n");
    }
    printf("**************************************** \n");

     //4th method print star pattern left downward (Simple and Generic)
     int lines;
     printf("Enter No. of lines to print star pattern: ");
     scanf("%d",&lines);
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= lines; j++)
        {
            if (j <= (lines + 1) - i)
            {
                printf(" * ");
            }
            else
            {
                printf(" - ");
            }   
        }    
        printf("\n");
    }
    printf("**************************************** \n");

    

    return 0;
}