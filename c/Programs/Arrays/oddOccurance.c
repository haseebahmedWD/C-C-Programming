// Write a program in C to find the number occurring odd number of times in an array.
// All numbers occur even number of times except one number which occurs odd number of times.
// Expected Output :
// The given array is : 8 3 8 5 4 3 4 3 5
// The element odd number of times is : 3
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, ctr, e,o,k = 0;
    printf("Enter size of array: ");
    scanf("%d",&range);
    int a[range], even[range], odd[range];
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
    //Searching for odd and even ocur
    for (int i = 0; i < range; i++)
    {
        ctr = 1;
        for (int j = i + 1; j < range; j++)
        {
            if (a[i] == a[j])
            {
                ctr++;
            }
        }
        if (ctr % 2 != 0)
        {
        for (k = 0; k < i; k++)
        {
        if (a[k] == a[i])
        {
            break;
        }  
        }
        if (k == i)
        {
            odd[o] = a[i];
            o++;
        }
        }
        else
        {
        for (k = 0; k < i; k++)
        {
        if (a[i] == a[k])
        {
            break;
        }  
        }
        if (k == i)
        {
            even[e] = a[i];
            e++;
        }
        }
    }     
    //display odd elements
    for (int i = 0; i < o; i++)
    {
        printf("%d is odd times occur! \n",odd[i]);
    }
     //display even elements
    for (int i = 0; i < e; i++)
    {
        printf("%d is even times occur! \n",even[i]);
    }
    
        return 0;
    }
    
    

