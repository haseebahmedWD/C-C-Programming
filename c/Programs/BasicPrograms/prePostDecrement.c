// Write a C program to demonstrate the difference between preincrement and postincrement using the increment operator
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 5;
    printf("a = %d, b = %d \n",a,b);
    printf("++a , a : %d %d \n",++a,a);
    printf("b++ , b :  %d %d \n",b++,b);
    // pre++ priority is higher post++ priority is lower
    //in b++ -> b = b+1 it will assign first then increment, assign '=' priority is higher than '+' increment
    return 0;
}


