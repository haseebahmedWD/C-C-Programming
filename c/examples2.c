#include<stdio.h>
int main()
{
   //program to check whether number is divisible by 2 and 3
   int x;
   printf("Please enter a number: ");
   scanf("%d",&x);
   if (x % 2 == 0 && x %3 == 0)
   {
    printf("%d is divisible by 2 and 3",x);
   }
   else
   {
    printf("%d is Not divisible by 2 and 3 \n",x);
   }
   printf("**************************************** \n");

   //program to check whether a number is divisible by 3 or divisible by 7
   printf("Please enter a number: ");
   scanf("%d",&x);
   if (x % 3 == 0 || x % 7 ==0)
   {
    printf("%d is divisible by 3 or 7 \n",x);
   }    
   else{
    printf("%d is neither divisible by 3 nor by 7 \n",x);
   }
   
    printf("**************************************** \n");
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c >= 65 && c <= 90)
    {
       printf("%c is uppercase alphabet \n",c);
    }
    else if(c >= 97 && c <= 122)
    {
        printf("%c is lowercase alphabet \n",c);
    }
    else if(c >= 48 && c <=57 )
    {
        printf("%c is a digit \n",c);
    }
    else if( c >= 33 && c <= 38 )
    {
        printf("%c is special character \n",c);
    }
    else
    {
        printf("%c is another character \n",c);
    }

    printf("**************************************** \n");


    printf("**************************************** \n");
    return 0;
}
