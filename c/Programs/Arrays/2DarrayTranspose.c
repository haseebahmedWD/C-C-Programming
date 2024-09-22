//write a program to find transpose of a matrix
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col;
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter col: ");
    scanf("%d",&col);
    int a[row][col];
    int t[row][col];
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
    //transpose of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            t[j][i] = a[i][j];
        } 
        printf("\n");
    }
    //display transpose matrix
    printf("Transpose of matrix: \n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" %d ",t[i][j]);
        } 
        printf("\n");
    }
return 0;
}
