#include<stdio.h>
//Enter a amount and break down it in smallest possible values
//for example a 575Rs. must be divided into 500, 70, 50, 20 10 etc
int main()
{
    int amount,temp;
    printf("Please enter amount: ");
    scanf("%d",&amount);
    if (amount >= 1000)
    {
        temp = amount / 1000;
        printf("%d note of thousand \n",temp);
        amount = amount - (temp*1000);
    }
    if (amount >= 500)
    {
        temp = amount / 500;
        printf("%d note of five hundred \n",temp);
        amount = amount - (temp*500);
    }
    if (amount >= 100)
    {
        temp = amount / 100;
        printf("%d note of hundred \n",temp);
        amount = amount - (temp*100);
    }
    if (amount >= 50)
    {
        temp = amount / 50;
        printf("%d note of fifty \n",temp);
        amount = amount - (temp*50);
    }
    if (amount >= 10)
    {
        temp = amount / 10;
        printf("%d note of tens \n",temp);
        amount = amount - (temp*10);
    }
    if (amount<10)
    {
        printf("%d coins\n",amount);
    }
    
        
    
   
    
}