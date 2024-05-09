#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int num = 0;
    printf("Enter single digit: ");
    do
    {
        ch = getc(stdin);
        getchar(); //it is used here to dump the \n value that we get by pressing Enter on keyboard after input.
        if (ch >=48 && ch<=57)
        {
            num = (num * 10) + (ch - 48);
        }
        else
        {
            break;
        }
        
    } while (1);
    printf(" %d \n",num);
    
    return 0;
}
