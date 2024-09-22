// Write a C program using looping to produce the following table of values.
// Sample Output:

// x       x+2     x+4     x+6
// --------------------------------
// 1       3       5       7
// 4       6       8       10
// 7       9       11      13
// 10      12      14      16
// 13      15      17      19
#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <=13; i+=3)
    {
        for (int j = i; j <= i+6; j+=2)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    
    return 0;
}
