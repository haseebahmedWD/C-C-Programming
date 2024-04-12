#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b,c = 0;
    printf("Enter lengths of three sides of triangle : ");
    scanf("%d %d %d", &a,&b,&c);
    if ((a + b)>c && (a + c)>b && (b + c)>a)
    {
        printf("Triangle is valid \n");
    }
    else
    {
        printf("Triangle is Invalid \n");
    }
    
    return 0;
}
