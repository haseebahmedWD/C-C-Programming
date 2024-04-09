#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice = 0;
    while (1)
    {
    
    printf("Press 1 for Area of a Circle \n");
    printf("Press 2 for Area of a Rectangle \n");
    printf("Press 3 for Average of three numbers \n");
    printf("Press 4 for Exit \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        int radius;
        printf("Enter radius of the circle: ");
        scanf("%d",&radius);
        printf("Area of circle is: %f \n", 3.14 * (radius * radius));
        break;
    case 2:
        int width, length;
        printf("Enter width and length: ");
        scanf("%d %d",&width,&length);
        printf("Area of rectangle is: %d \n", (width * length));
        break;
    case 3:
        int num1,num2,num3 = 0;
        printf("Enter three numbers: ");
        scanf("%d %d %d",&num1,&num2,&num3);
        printf("Average of three numbers is: %f \n", (num1 + num2 + num3) / 3.0);
        break;
    case 4:
        exit(0);

    default:
        printf("invalid choice");
    }
    }
    return 0;
}
