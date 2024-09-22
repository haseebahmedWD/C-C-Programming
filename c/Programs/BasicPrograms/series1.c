//Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 1power4 + 2power4 + 4power4 + 7power4 + 11power4 + • • • + m power4. In this case, m is less than or equal to n. Print an appropriate message.
#include<stdio.h>
#include<math.h>
int main()
{
    int range, sum;
    int num = 1;
    printf("Enter a number below 100: ");
    scanf("%d",&range);
    for (int i = 0; num < range-1; i++)
    {
        num = num + i;
       printf(" %d ",num);
        sum = sum + (int)pow(num,4);   
         //printf(" %d ",sum);
    }
    printf("Sum is: %d",sum);
    

}