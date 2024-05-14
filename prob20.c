#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of elements : ");
    scanf("%d", &n);
    int a[n], b[n], sum[n], i;
    printf("Enter 1st array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element no. %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter 2nd array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element no. %d : ", i + 1);
        scanf("%d", &b[i]);
        sum[i] = a[i] + b[i];
    }
    printf("Sum of array elents\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", sum[i]);
    }
    printf("\n");
    return 0;
}