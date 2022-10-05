#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,choice;
    while(1)
    {
        printf("Enter your choice given below\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square\n6. Square Root\n7. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("Enter first number :");
                scanf("%d",&a);
                printf("Enter second number :");
                scanf("%d",&b);
                printf("Sum of %d and %d is %d",a,b,a+b);
                printf("\n\n#####################\n\n");
                break;
        case 2: printf("Enter first number :");
                scanf("%d",&a);
                printf("Enter second number :");
                scanf("%d",&b);
                printf("Difference of %d and %d is %d",a,b,a-b);
                printf("\n\n#####################\n\n");
                break;
        case 3: printf("Enter first number :");
                scanf("%d",&a);
                printf("Enter second number :");
                scanf("%d",&b);
                printf("Product of %d and %d is %d",a,b,a*b);
                printf("\n\n#####################\n\n");
                break;
        case 4: float n1,n2;
                printf("Enter first number :");
                scanf("%f",&n1);
                printf("Enter second number :");
                scanf("%f",&n2);
                printf("Quotient of %f and %f is %f",n1,n2,n1/n2);
                printf("\n\n#####################\n\n");
                break;
        case 5: printf("Enter a number :");
                scanf("%d",&a);
                printf("Square of %d is %d",a,a*a);
                printf("\n\n#####################\n\n");
                break;
        case 6: float x,res;
                printf("Enter a number :");
                scanf("%f",&x);
                res = sqrt(x);
                printf("Square root of %f is %f",x,res);
                printf("\n\n#####################\n\n");
                break;
        case 7: exit(0);
                break;
        }
    }

    return 0;
}
