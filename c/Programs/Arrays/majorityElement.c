// Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
// Expected Output :
// The given array is : 4 8 4 6 7 4 4 8
// There are no Majority Elements in the given array.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, ctr, i = 0;
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
    //Searching for majority element
    for (i = 0; i < range; i++)
    {
        ctr = 1;
        for (int j = i + 1; j < range; j++)
        {
            if (a[i] == a[j])
            {
                ctr++;
            }
        }
        if (ctr > range/2)
        {
            printf("%d is majority element! \n",a[i]);
            break;
        }  
    }
    if (i == range)
    {
        printf("No majority element found! \n");
    }
    
    return 0;
}
