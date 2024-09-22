//write a program to create upper and lower triangular in 2D Matrix
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col = 0;
    printf("Enter a square matrix: \n");
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&col);
    int a[row][col];
    //input a matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //display the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    //upper & lower triangular of matrix 
    printf("Upper & lower triangular: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < row && j > i)   //condition for upper triangular
            {
                a[i][j] = 0;
            }
            if (i > 0 && j < i ) // condition for lower triangular
            {
                a[i][j] = 0;
            }
            
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
