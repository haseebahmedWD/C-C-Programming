//write a program to input seconds and convert it in hour and minutes and remaining seconds
#include<stdio.h>
int main()
{
    int sec_input, hours,minutes,seconds;
    printf("Enter seconds: ");
    scanf("%d",&sec_input);
    hours = sec_input / 3600;
    minutes = (sec_input % 3600) / 60;
    seconds = sec_input - ((hours * 3600) + (minutes * 60));
    printf("0%d hour : %d minutes : %d seconds \n",hours,minutes,seconds);
}