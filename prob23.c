#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("Enter no. of elements : ");
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter element no. %d = ", i);
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n\nSorted array : \n\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}