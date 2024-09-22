//write a program to reverse number values
#include<stdio.h>
int main()
{
    int size, temp;
    printf("Enter range: ");
    scanf("%d",&size);
    int arr1[size];
    //input values
    printf("Enter %d values : ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //display values
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",arr1[i]);
    }
    printf("\n");
    //reverse values
    for (int i = 0; i<(size/2); i++)
    {
        //swapping values
        temp = arr1[i];
        arr1[i] = arr1[(size-1) - i];
        arr1[(size-1) - i] = temp;
    }
    //display values
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",arr1[i]);
    }
    printf("\n");
    getchar();
    printf("***************************************** \n");
    // Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters in the string between n1 and n2
    int n1, n2;
    char str1[20];
    printf("Enter string: ");
    fgets(str1,20,stdin);
    printf("%s",str1);
    printf("Enter start index [0-20]: ");
    scanf("%d",&n1);
    printf("Enter end index [0-20]: ");
    scanf("%d",&n2);
    for (int i = n1; i <=n2; i++)
    {
        temp = str1[i];
        str1[i] = str1[n2];
        str1[n2] = temp;
        n2--;
    }
    printf("%s \n",str1);

}