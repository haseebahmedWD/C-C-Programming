#include<stdio.h>
int main()
{
    //Check Even or Odd without % operator
    int x;
    float div;
    printf("Enter a number: ");
    scanf("%d",&x);
    div = x / 2.0;  //qoutient value in decimal
    x = div;     // convert qoutient in integer 
    div = div - x;   //difference of values
    if (div == 0)       //0 is same as 0.0
    {
        printf("Even \n");
    }
    else
    {
        printf("Odd \n");
    }
    
    //Check even or odd with % operator
    printf("Enter a number: ");
    scanf("%d",&x);
    if (x % 2 == 0)     
    {
        printf("Even \n");
    }
    else
    {
        printf("Odd \n");
    }
}
