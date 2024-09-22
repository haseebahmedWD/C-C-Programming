#include<stdio.h>

int main()
{
    int i;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    char arr2[] = {"pakistan"};
    int arr_length = *(&arr + 1) - arr; // using pointer arithmetic
    printf("Length is: %d \n", arr_length);
    
    for (i = 0; arr2[i]!='\0'; i++);
    printf("Length is: %d\n",i);
    return 0;
}
