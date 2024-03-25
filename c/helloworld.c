#include<stdio.h>


int main()
{
    // int a;
    // printf("Enter a number ");
    // scanf("%d",&a);
    // printf("%d \n",a);
    printf("hello world \n");   // next line
    printf("Hello\tworld \n");   // tab
    printf("Hello\bworld \n");   // backspace
    printf("Hello\rworld \n");   // carriage return
    printf("\\ \n");   
    printf("\" \n");   
    printf("\' \n"); 
    printf(" ********** ********** ********** \n");

    printf("Format Specifiers \n");
    int b = 5;
    float f = 23.5;
    double d = 55.56;
    printf("value of int b is: %d \n",b);
    printf("value of float f is: %f \n",f);
    printf("value of double d is: %lf \n",d);
    printf("value of int b with format specifier float is: %f \n",b);
    printf("value of float f with format specifier int is: %d \n",f);
    printf("value of double d with format specifier float is: %f \n",d);
    printf("value of int b with format specifier char is: %c \n",b);
 
    return 0;
}