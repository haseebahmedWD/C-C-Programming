#include<stdio.h>
#include<stdlib.h>
int main()
{
    //write a program to sort an array in ascending order
    int count= 5;
    int temp = 0;
    int arr1[count];
    // input variables in array
    printf("Enter random 5 numbers: ");
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //display array values
    printf("Unsorted: ");
    for (int i = 0; i < count; i++)
    {
        printf(" %d ",arr1[i]);
    }
    printf("\n");
    //sorting array values in ascending order
    printf("Sorted: ");
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr1[i] > arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }  
    }
    //display array values
    for (int i = 0; i < count; i++)
    {
        printf(" %d ",arr1[i]);
    }
    printf("\n");
    
    return 0;
}