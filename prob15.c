#include <stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm = t1 + t2, oddSum = 0, evenSum = 0, option, exit = 1;
    while (exit)
    {
        printf("\n1 = Do Factorial\n2 = Print Fibonacci Series\n3 = Print Sum Upto Odd & Even Number Seperately\n4 = Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            int fact = 1;
            printf("Enter A Number : ");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
            {
                fact *= i;
            }
            printf("Factorial = %d", fact);
            break;
        case 2:
            printf("Enter Number of Terms : ");
            scanf("%d", &n);
            printf("Fibonacci Series : \t%d\t%d\t", t1, t2);
            for (i = 3; i <= n; i++)
            {
                printf("%d\t", nextTerm);
                t1 = t2;
                t2 = nextTerm;
                nextTerm = t1 + t2;
            }
            printf("\n");
            break;
        case 3:
            printf("Enter A Number : ");
            scanf("%d", &n);
            for (i = 0; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    evenSum = evenSum + i;
                }
                else
                {
                    oddSum = oddSum + i;
                }
            }
            printf("Sum of Odd Numbers = %d\n", oddSum);
            printf("Sum of Even Numbers = %d\n", evenSum);
            break;
        case 4:
            exit = 0;
            break;
        default:
            printf("Invalid Input");
            break;
        }
    }
    return 0;
}