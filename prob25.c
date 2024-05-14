#include <stdio.h>
int main()
{
    int i, j, m, n, b = 0, sum = 0;
    printf("Enter no. of rows : ");
    scanf("%d", &m);
    printf("Enter no. of columns : ");
    scanf("%d", &n);
    int a[m][n];
    if (m == n)
    {
        printf("Enter the matrix : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            sum += a[i][i];
            b += a[i][m-i-1];
        }
        printf("Sum of main diagonal = %d\n",sum);
        printf("Sum of off diagonal = %d\n",b);
    }
    else
    {
        printf("\nGiven Matrix Is Not A Square Matrix\n");
    }
    return 0;
}