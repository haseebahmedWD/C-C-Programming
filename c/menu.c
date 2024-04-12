#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1, num2, choice;
    while (1)
    {
        printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit \n Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            printf("Sum is: %d\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            printf("Subtraction is: %d\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            printf("Multiplication is: %d\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d",&num1,&num2);
            printf("Division is: %d\n", num1 / num2);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice \n");
        }
    }
    
    return 0;
}
