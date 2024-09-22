// Write a program in C to find a pair with given sum in the array.
// Expected Output :
// The given array : 6 8 4 -5 7 9
// The given sum : 15

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, sum, flag = 0;
    printf("Enter size of array: ");
    scanf("%d",&range);
    int a[range];
    //input the array
    for (int i = 0; i < range; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    //display the array
     for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    
    }
    printf("\n");
    // input sum
    printf("Enter sum of pair of values in array: ");
    scanf("%d",&sum);
    //Searching for sum of pair values if found then print indexes
    for (int i = 0; i < range; i++)
    {
        for (int j = i + 1; j < range; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("Sum of index %d and %d is %d \n",i, j , sum);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
        
    }
    return 0;
}
