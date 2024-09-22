//write a program to display sum of diagonals(right,left) of 2D array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col, sumR, sumL, f, s = 0;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter col: ");
    scanf("%d",&col);
    int a[row][col];

    //input
    printf("Enter matrix values: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }
    //display matrix
    printf("Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ",a[i][j]);
        } 
        printf("\n");
    }
    //sum of right diagonal of matrix
    f = 0;
    s = col-1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == a[f][s] && (f<=col-1 && s>=0))
            {
                sumR = sumR + a[i][j];
                f++;
                s--;
            }
            if (i == j) //sum of left diagonal
            {
                sumL = sumL + a[i][j];
            }
            
        }
    }
    printf("sum of right diagonal is: %d \n",sumR);
    printf("sum of left diagonal is: %d \n",sumL);
    
    return 0;
}
