// Insert element in array
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int range, val, pos, temp = 0;
    int Maxsize = 100;
    printf("Enter range of an array: ");
    scanf("%d",&range);
    int a[Maxsize];
    //input an array
    printf("Enter %d elements of integer array: ",range);
    for (int i = 0; i < range; i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting array in ascending order
    for (int i = 0; i < range; i++)
    {
        for (int j = i + 1; j < range; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            } 
        }    
    }
    // display the array
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    //insert element at specific point 
    printf("Enter element to insert in array : ");
    scanf("%d",&val);
    printf("Enter position in array : ");
    scanf("%d",&pos);
    //check whether position within range or not.
    if (pos > range+1)
    {
        while (pos > range+1)
        {
           printf("Enter position with in range [1 to %d]: ",range+1);
           scanf("%d",&pos);
        }   
        
    }
    //shifting elements from specific position where we want to insert new element (left to right)
    for (int i = range; i >= pos; i--)
    {
        a[i] = a[i -1];
    }
    a[pos-1] = val;
    range++;
    // display the array
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    
    
     
}