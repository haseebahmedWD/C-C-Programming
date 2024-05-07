#include<stdio.h>
struct date
{
    int day, month, year;
};
struct date inputDate()
{
    struct date temp;
    printf("Enter date: ");
    scanf("%d %d %d",&temp.day, &temp.month, &temp.year);
    //this method is if you want to input date as 23/08/1991 format. We use / as delimiter here
    // scanf("%d/%d/%d",&temp.day, &temp.month, &temp.year); 
    return temp;
    
}
void outputDate(struct date temp)
{
    printf("%d-%d-%d \n",temp.day,temp.month,temp.year);
    //this method is if you want to output date as 23/08/1991 format. We use / as delimiter here
    // printf("%d/%d/%d",&temp.day, &temp.month, &temp.year);
}
int main()
{
    struct date d1;
    d1 = inputDate();
    outputDate(d1);

    return 0;
}
