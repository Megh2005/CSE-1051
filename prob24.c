#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter order of matrix : ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n], d[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element for matrix A : ");
            scanf("%d", &a[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element for matrix B : ");
            scanf("%d", &b[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            d[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; i < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Profuct Matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("/n");
    }
    printf("Addition Matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; i < n; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}