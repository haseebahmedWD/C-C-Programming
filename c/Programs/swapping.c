#include<stdio.h>
int main()
{
    //swapping of two numbers without using third variable
    int x,y = 0;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("X: %d Y: %d \n",x,y);
    x = x + y;  
    y = x - y;
    x = x - y;
    printf("X: %d Y: %d \n",x,y);

    //swapping of two numbers with using third variable
    int temp;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("X: %d Y: %d \n",x,y);
    temp = x;  
    x = y;
    y = temp;
    printf("X: %d Y: %d \n",x,y);
    return 0;
}
