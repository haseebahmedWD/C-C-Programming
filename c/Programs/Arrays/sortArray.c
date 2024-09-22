// sort an array in ascending and descending order
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, temp = 0;
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
    printf("Ascending order: ");
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    
     
    //sorting array in descending order
    for (int i = 0; i < range; i++)
    {
        for (int j = i + 1; j < range; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            } 
        }    
    }
    // display the array
    printf("descending order: ");
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    return 0;
}
