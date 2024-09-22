//write a program to calculate determinant of 3x3 matrix
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count = 3;
    int det = 0;
    int a[count][count];
    //input matrix
    printf("Enter 3x3 matrix \n");
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //display the matrix
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("   %d   ",a[i][j]);
        }
        printf("\n");
    }
    //determinant of matrix
    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]) - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]) + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("Determinant of matrix is: %d \n",det);
    return 0;
}
