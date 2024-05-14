#include <stdio.h>
int main()
{
    int a[10], num, i = 1, opr, gate = 1, j;
    while (gate)
    {
        printf("\n1 = Decimal to Binary\n2 = Binary to Decimal\n3 = Exit\n");
        printf("Enter operation no. : ");
        scanf("%d", &opr);
        switch (opr)
        {
        case 1:
            printf("\nEnter decimal number : ");
            scanf("%d", &num);
            while (num != 0)
            {
                a[i++] = num % 2;
                num = num / 2;
            }
            printf("\nConverted binary number : ");
            for (j = i - 1; j > 0; j--)
            {
                printf("%d", a[j]);
            }
            break;
        case 2:
            int binary_num, decimal_num = 0, remainder, base = 1;

            printf("\nEnter the binary number : ");
            scanf("%d", &binary_num);

            while (binary_num != 0)
            {
                remainder = binary_num % 10;
                decimal_num += remainder * base;
                binary_num /= 10;
                base *= 2;
            }

            printf("\nConverted decimal number : %d\n", decimal_num);
            break;
        case 3:
            gate = 0;
            break;
        default:
            printf("\nInvalid Input\n");
            break;
        }
    }
    return 0;
}