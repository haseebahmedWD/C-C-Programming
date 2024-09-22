//write a program to identify sparse matrix
//A sparse matrix is which has more 0's than non-zero elements
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col, zero_val, nonzero_val = 0;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&col);
    int a[row][col];
    //input matrix
    printf("Enter matrix elements \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            if (a[i][j] == 0)
            {
                zero_val++;
            }
            else
            {
                nonzero_val++;
            } 
        }
    }
    //display the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("   %d   ",a[i][j]);
        }
        printf("\n");
    }
    //determinant of matrix
   if (zero_val > nonzero_val)
   {
    printf("Matrix has %d zeros and it is Sparse \n",zero_val);
   }
   else
   {
    printf("Matrix is not sparse! \n");
   } 
    return 0;
}
