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
void sortDate(struct date *p, int count)
{
    struct date temp;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (p[i].year > p[j].year)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            if (p[i].year == p[j].year)
            {
                if (p[i].month > p[j].month)
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
                if (p[i].month == p[j].month)
                {
                    if (p[i].day > p[j].day)
                    {
                        temp = p[i];
                        p[i] = p[j];
                        p[j] = temp;
                    }
                    
                }
                
                
            }
            
        }
        
        
    }
    
}
void outputDate(struct date temp)
{
    printf("%d-%d-%d  | ",temp.day,temp.month,temp.year);
    //this method is if you want to output date as 23-08-1991 format. We use - as delimiter here
    // printf("%d/%d/%d",&temp.day, &temp.month, &temp.year);
}
int main()
{
    struct date d1;
    int size = 4;
    struct date dob[size];
    //input and output of single date
    d1 = inputDate();
    outputDate(d1);
    printf("\n");

    //input in date type array
    for (int i = 0; i < size; i++)
    {
        dob[i] = inputDate();
    }
    //sorting of date array
    sortDate(dob,size);
    //output of date type array
    for (int i = 0; i < size; i++)
    {
        outputDate(dob[i]);
    }
    

    return 0;
}
