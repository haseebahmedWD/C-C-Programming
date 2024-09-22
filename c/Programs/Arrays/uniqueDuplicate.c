// Write a program in C to count the total number of unique elements in an array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int range, j, m, l,  flag = 0;
    printf("Enter range of elements in integer array: ");
    scanf("%d",&range);
    int a[range], u[range], d[range];
    //input array elements
    printf("Enter %d integer elements: ",range);
    for (int i = 0; i < range; i++)
    {
        scanf("%d",&a[i]);
        
    }
    //finding duplicate elements in array
    for (int i = 0; i < range; i++)
    {
        flag = 0;
        for (j = i + 1; j < range; j++)
        {
            if (a[i] == a[j])   //duplicate values
            {
                d[l] = a[i];   
                l++;
                break;
            }
            
        }
        if (j == range)
        {
           
        for (int k = 0; k < l; k++)
        {
            if (a[i] == d[k])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            u[m] = a[i];    //unique values
            m++;
        }
        
        }
    }
    //display array
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
    //display the array unique values
    printf(" %d unique value: \n",m);
    for (int i = 0; i < m; i++)
    {
        printf(" %d ",u[i]);
    }
    printf("\n");
    //display the array duplicate values
    printf(" %d duplicate value: \n", l);
    for (int i = 0; i < l; i++)
    {
        printf(" %d ",d[i]);
    }
    printf("\n");
    return 0;
}
