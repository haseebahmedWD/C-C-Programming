#include<stdio.h>
#include<stdlib.h>

int main()
{
    //write a program to print pattern 
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5-i && j <= 3+i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
          printf("\n");
    }
printf("**************************************** \n");

//write a program to print pattern
for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= 5; j++)
    {
    if ((i <= 3) && (j >= 4-i && j <= 2+i ))
    {
        printf(" * ");
    }
    else if ((i >= 4) && (j >= -2+i && j <= 8-i))
    {
        printf(" * ");
    }
    else
    {
        printf("   ");
    }
    }
    printf("\n");
}

printf("**************************************** \n");

//print the same pattern using input
int k, lines = 0;
printf("Enter lines to print pattern: ");
scanf("%d",&lines);
for (int i = 1; i <= lines; i++)
{
    i <= ((lines + 1) / 2) ? (k = i) : (k = (lines + 1) - i); 
    for (int j = 1; j <= lines; j++)
    {
        if (j >= ((lines + 1) / 2) + 1 - k && j <= ((lines+1) / 2) -1 + k )
        {
            printf(" * ");
        }
        else
        {
            printf("   ");
        } 
    }
    printf("\n"); 
}

printf("**************************************** \n");


    return 0;
}
