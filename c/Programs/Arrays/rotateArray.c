// Write a program in C to rotate an array by N positions.
// Expected Output :
// The given array is : 0 3 6 9 12 14 18 20 22 25 27
// From 4th position the values of the array are : 12 14 18 20 22 25 27
// Before 4th position the values of the array are : 0 3 6 9
// After rotating from 4th position the array is:
// 12 14 18 20 22 25 27 0 3 6 9
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, temp, index, j = 0;
    printf("Enter range: ");
    scanf("%d",&range);
    int a[range];
    //input the array
    for (int i = 0; i < range; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    //display
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    //rotating array according to index
    printf("Enter index to rotate (right to left): " );
    scanf("%d",&index);
    for (int i = 0; i < index; i++)
    {
        temp = a[0];
    for (j = 0; j < range-1; j++)
    {
        a[j] = a[j + 1];
    }
        a[j] = temp;
    }
    //display
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    
    
    return 0;
}
