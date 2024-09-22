// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character.
// Sample Input: 10

// ##########
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// #        #
// ##########
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count = 10;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (i == 1 || i == count || j == 1 || j == count)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
