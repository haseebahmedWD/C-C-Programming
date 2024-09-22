// Write a program in C to find the missing number in a given array. There are no duplicates in the list.
// Expected Output :
// The given array is : 1 3 4 2 5 6 9 8
// The missing number is : 7
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, n_sum, sum_array, j;
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
    //finding missing number
    //finding sum of natural numbers
    for (int i = 1; i <=range+1; i++)
    {
        n_sum = n_sum + i;
    }
    //finding sum of array elements
    for (int i = 0; i < range; i++)
    {
        sum_array = sum_array + a[i];
    }
    printf("Missing number is: %d \n", n_sum - sum_array);

    return 0;
}
