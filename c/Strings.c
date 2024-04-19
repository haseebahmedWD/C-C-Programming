#include<stdio.h>
#include<stdlib.h>


int main()
{
    char str[] = {'L','A','H','O','R','E'};
    int length, i = 0;

    //calculate length of the string
    for (i = 0; str[i] != '\0'; i++);
   
    length = i;
    printf("Length of string: %d \n",length);
    //printing string
    for (i = 0; i <= length; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    //Another method to print string
    printf("%s\n",str);

    //taking input from user
    length = 100;
    char input_str[length];
    printf("Enter a string: ");

    // gets() is not used today it is unsafe because it do illegal memory access it puts more characters than string length
    // gets(input_str);    
    fgets(input_str,length,stdin);      //stdin used here because we are getting input from keyboard
    printf("%s",input_str);

    return 0;
}