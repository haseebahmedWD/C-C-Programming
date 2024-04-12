#include<stdio.h>
#include<stdlib.h>

int main()
{
    //write a programme to take three digit number as input and rotate one digit to its position right
    int num, mod, div;
    printf("Enter three digit number: ");
    scanf("%d",&num);
    mod = num % 10;
    div = (mod * 100) + (num / 10);
    printf("After rotation is: %d \n",div);
    printf("**************************************** \n");
    return 0;
}
