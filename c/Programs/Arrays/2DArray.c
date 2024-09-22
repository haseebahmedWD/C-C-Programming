//2D array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    //input and display 2D array
    int row, col = 0;
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&col);
    int a[row][col];
    //input the 2D Array
    printf("Enter 2D array elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }  
    //display the 2D Array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ",a[i][j]);
        }   
       printf("\n");
    }
     
    return 0;
}
