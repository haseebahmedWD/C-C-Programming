//write a program to check whether it is Identity matrix
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col = 0;
    int identity = 1;
    printf("Enter matrix \n");
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&col);
    int a[row][col];
    //input matrix
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
            //checking it is identity matrix or not
            if ((i == j  && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                identity = 0;
            }
        
        }
        printf("\n");
    }
    if (identity)
    {
        printf("Yes it is identity matrix! \n");
    }
    else
    {
        printf("No it is not identity matrix! \n");
    }
    return 0;
}
