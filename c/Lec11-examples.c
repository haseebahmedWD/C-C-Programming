#include<stdio.h>
int main()
{
    //write a program to calculate sum of first N natural numbers
    int range, sum = 0;
    printf("Enter range of numbers: ");
    scanf("%d",&range);
    for (int i = 1; i <= range; i++)
    {
        sum+=i;
    }
    printf("Sum of range %d is %d \n",range,sum);
    printf("**************************************** \n");

    //Write a guess game program to enter a even number
    int input, i = 0;
    while (i < 3)
    {
        printf("Enter an even number: ");
        scanf("%d",&input);
        if (input % 2 == 0)
        {
            printf("Congrats! You have won the game \n");
            break;
        }
        i++;
    } 
    printf("**************************************** \n");

    //check output of the program
    int j, k = 0;
    for ( j =1 , k =10; j < k; j++ , k--)
    {
        if ( j == k)
        {
            break;
        }
        printf(" %d ", j + k);
    }
    printf("\n **************************************** \n");
    return 0;
}