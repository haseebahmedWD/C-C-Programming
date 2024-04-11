#include<stdio.h>
int main()
{
    // // write a program to check nature of roots of quadratic equations
    int a,b,c,d = 0;
    printf("Enter values of a b c : ");
    scanf("%d %d %d",&a,&b,&c);
    //discriminant formula
    d = (b*b)-(4*a*c);
    if (d > 0)
    {
        printf("Real and Distinct Roots! \n");
    }
    else if (d == 0)
    {
        printf("Real and Equal Roots! \n");
    }
    else
    {
        printf("Imaginary Roots \n");
    }
    
  //write a program to calculate roI (rate of interest) (read notes for detail)  
  int age, amount;
  float roI = 0.0f;
  printf("Enter age of customer: ");
  scanf("%d",&age);
  printf("Enter amount of investment (between 10,000 to 100,000): ");
  scanf("%d",&amount);
  if ((age >= 18 && age <=55) && (amount >= 10000 && amount <= 100000))
  {
    if (age >= 18 && age <= 24)
    {
        roI = (0.05 * amount) * 30;
    }
    else if (age >= 25 && age <= 39)
    {
        roI = (0.05 * amount) * 20;
    }
    else 
    {
        roI = (0.05 * amount) * 10;
    }  
    printf("Maturity amount is: %f \n", roI + amount);
  }
  else
  {
    printf("age or amount is not according to criteria \n");
  }

//write a program to print first N natural odd numbers
int range = 0;
printf("Enter range to print natural odd numbers: ");
scanf("%d",&range);
for (int i = 1; i <= range; i++)
{
    if (i % 2 != 0)
    {
        printf(" %d ",i);
    }
    
}
    return 0;
}
