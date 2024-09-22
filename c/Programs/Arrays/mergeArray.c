// Write a program in C to merge two arrays of the same size
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {3,2,1,4,5};
    int b[5] = {9,7,8,6,10};
    int m[10];
    int temp, i = 0;
    //copy first array
    for ( i = 0; i < 5; i++)
    {
        m[i] = a[i];
    }
    //copy second array
    for (int j = 0; j < 5; j++)
    {
        m[i] = b[j];
        i++;
    }
     //display array1
    printf("First array: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("   ");
     //display array2
     printf("Second array: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ",b[i]);
    }
    printf("\n");
    
    //sort in ascending order
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (m[i] > m[j])    //swap the elements if first is greater
            {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
    //display the merged and sorted array
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ",m[i]);
    }
    printf("\n");
    
    return 0;
}
