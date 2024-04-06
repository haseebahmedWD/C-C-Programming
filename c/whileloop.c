#include<stdio.h>
int main()
{
    //print 5 times "LIKE KRO" 
    int i = 1;
    while (i <= 5)
    {
        printf("LIKE KRO \n");
        i++;
    }
    printf("**************************************** \n");
    // check output of following code
    int x = 3, y = 4;
    while (x < y)
    {
        printf("%d \n", x + y);
        y = y - x;
        x = y - x;
    }
    printf("**************************************** \n");
    //check output of the following code  
    // int i = 10;
    // while (i)
    // {
    //    printf("%d",i);
    //    i-1;
    // }
    //(Output will be infinite loop)
    printf("**************************************** \n");
   // write a program to print first 10 even natural numbers
    int num = 1;
    printf("First 10 even natural numbers: \n");
    while (num <= 20)
    {
        if (num % 2 == 0)
        {
            printf("%d ",num);
        }
        num++;
    }
    printf("**************************************** \n");
   // find output of this program
    int j = 1;
    while (j <= 10)
    {
        printf(" %d ", 11-j);
        j++;
    }
    
    printf( "\n **************************************** \n");
   // write a program to print range of N natural odd numbers in reverse order
    int input = 0;
    printf("Enter range to print odd numbers ");
    scanf("%d", &input);
    input = input * 2;  //because we have to print same amount of numbers as range
    while (input > 0)
    {
        if (input % 2 != 0)
        {
            printf(" %d ", input);
        }
        input--;
    }
    printf( "\n **************************************** \n");





    return 0;
}