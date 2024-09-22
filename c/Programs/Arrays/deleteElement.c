//write a code to delete element from an array from a specific position
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, val, pos, temp = 0;
    printf("Enter range of an array: ");
    scanf("%d",&range);
    int a[range];
    //input an array
    printf("Enter %d elements of integer array: ",range);
    for (int i = 0; i < range; i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting array in ascending order
    // for (int i = 0; i < range; i++)
    // {
    //     for (int j = i + 1; j < range; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         } 
    //     }    
    // }
    // display the array
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    //delete element at specific point 
    printf("Enter position of element in array to delete : ");
    scanf("%d",&pos);
    //check whether position within range or not.
    if (pos > range)
    {
        while (pos > range)
        {
           printf("Enter position with in range [1 to %d]: ",range);
           scanf("%d",&pos);
        }   
        
    }
    //shifting elements towards specific position where we want to delete  element (right to left)
    for (int i = pos-1; i < range; i++)
    {
        a[i] = a[i + 1];
    }
    //range--;
    // display the array
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    
    
     
}
