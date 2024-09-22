//write a program to find sum of rows and columns of 2D array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int f_row, s_row, f_col, s_col, row, col = 0;
    int sumR, sumC = 0;
    printf("Enter rows of matrix: ");
    scanf("%d",&row);
    printf("Enter column of matrix: ");
    scanf("%d",&col);
    int a[row][col];
    //input the matrix
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
    //sum of rows
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0)
            {
                f_row = f_row + a[i][j];
            }
            else
            {
                s_row = s_row + a[i][j];
            }       
        }
    
    }
    //sum of columns
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0)
            {
                f_col = f_col + a[j][i];
            }
            else
            {
                s_col = s_col + a[j][i];
            }
            
        }
    
    }
    sumR = f_row + s_row;
    sumC = f_col + s_col;
    printf("Sum of first row : %d | Sum of second row:  %d \n",f_row,s_row);
    printf("Sum of first col : %d | Sum of second col:  %d \n",f_col,s_col);
    printf("Sum of all rows: %d \n",sumR);
    printf("Sum of all column: %d \n",sumC);
    return 0;
}
