//write a program to multiply two square 2-D Arrays
//2D array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    //input first array
    int row1, col1, row2, col2 = 0;
    int sum = 0;
    printf("Input first array \n");
    printf("Enter rows: ");
    scanf("%d",&row1);
    printf("Enter columns: ");
    scanf("%d",&col1);
    int a[row1][col1];
    //input the 2D Array
    printf("Enter first 2D array elements: ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }  
    //input second 2D array
    printf("Input second array \n");
    printf("Enter rows: ");
    scanf("%d",&row2);
    printf("Enter columns: ");
    scanf("%d",&col2);
    int b[row2][col2];
    printf("Enter second 2D array elements: ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    } 
    //display the first 2D Array
    
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf(" %d ",a[i][j]);
        }   
       printf("\n");
    }
   printf("\n");
    //display the second 2D Array
   
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf(" %d ",b[i][j]);
        }   
       printf("\n");
    }
    //multiplication of two arrays
    int c[row1][col2];
    if (row1 == col2)
    {
         printf("a * b = : \n");
         for (int i = 0; i < row1; i++)
         {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
            c[i][j] = sum; 
            sum = 0;
            }
            
         }
    }
    else
    {
        printf("Multiplication not possible! \n");
    }
    //display final matrix
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf(" %d ",c[i][j]);
        }   
       printf("\n");
    }
   
     
    return 0;
}
