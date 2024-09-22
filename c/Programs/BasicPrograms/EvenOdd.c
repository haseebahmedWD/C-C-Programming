#include<stdio.h>
int main()
{
//write a program to print even odd in given range
int range,e,o = 0;
printf("Enter range to print even and odd numbers: ");
scanf("%d",&range);
int even[range],odd[range];
for (int i = 1; i <= range; i++)
{
    if (i % 2 == 0)
    {
        even[e] = i;
        e++;
    }
    else
    {
        odd[o] = i;
        o++;
    }
}
//printing even
printf("Even numbers: ");
for (int i = 0; i<e; i++)
{
    printf(" %d ",even[i]);
}
printf("\n");
//printing odd
printf("Odd numbers: ");
for (int i = 0; i<o; i++)
{
    printf(" %d ",odd[i]);
}

}

