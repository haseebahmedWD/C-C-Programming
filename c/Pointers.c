#include<stdio.h>
int main()
{
    int x = 5, y = 10;
    int *p, *q = 0;
    int **r;
    p = &x,
    q = &y;
    r = &p;
    printf("x: %d \n",x);
    printf("y: %d \n",y);
    printf("p: %p \n",p);   //using %p to print address
    printf("q: %p \n",q);    //using %pd a to print address
    printf("r: %p \n",r);    //using %pd a to print address
    printf("*p: %d \n",*p);
    printf("*q: %d \n",*q);
    printf("**r: %d \n",**r);

    printf("p+1: %p ",p+1);  //added 4 bytes in output because x value is integer 
    printf(" *(p+1)=  %d \n",*(p+1));
    printf("q-1: %p ",q-1);  //added 4 bytes in output because x value is integer 
    printf(" *(q-1)= %d \n",*(q-1));
    printf("q-p: %ld \n",q-p); 

    printf("**************************************** \n");

    //pointers with  integer arrays
    printf("Integer Array: ");
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int *pt_arr;
    pt_arr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ",pt_arr[i]);
    }
    printf("\n **************************************** \n");
    //pointers with  integer arrays
    int length(char *p)
    {
        int i;
        for (i = 0; p[i]!='\0'; i++);
        return i;

    }
    printf("String Array: ");
    char str[] = "PAKISTAN";
    char *pt_str = str;
    int l = length(str);
    for (int i = 0; i < l; i++)
    {
        printf(" %c ",pt_str[i]);
    }
    printf("\n **************************************** \n");
    
    return 0;
}