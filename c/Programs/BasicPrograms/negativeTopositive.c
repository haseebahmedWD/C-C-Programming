//convert negative number to positive
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
  printf("Enter a negative number: ");
  scanf("%d",&num);
  num = num * -1;
  printf("%d \n",num);  
    return 0;
}
