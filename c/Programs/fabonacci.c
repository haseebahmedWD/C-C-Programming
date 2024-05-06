#include<stdio.h>
#include<stdlib.h>
//fabonacci function using recursion
int fab(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fab(n - 1) + fab(n - 2);
    }

}
int main()
{
    //fabonacci series
    int x,y,z,range;
    printf("Enter range to print fabonacci series: ");
    scanf("%d",&range);
    x = 0;
    y = 1;
    printf(" %d  %d ",x,y);
    for (int i = 0; i < range-2; i++)
    {
        z = x + y;
        printf(" %d ",z);
        x = y;
        y = z;
    }
    printf("\n **************************************** \n");
    //fabonacci series using recursion
    printf("Enter range to print fabonacci series: ");
    scanf("%d",&range);
    for (int i = 0; i < range; i++)
    {
       printf(" %d ",fab(i));
    }
    
    


    return 0;
}
