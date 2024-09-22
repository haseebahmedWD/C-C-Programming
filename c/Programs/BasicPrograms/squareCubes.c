//write a program to print square and cubes of numbers in columns
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Number-----Square-----Cubes \n");
    for (int i = 0; i <=20; i++)
    {
        printf("%d          %d          %d \n", i, i*i, i*i*i);
    }
    
    return 0;
}
