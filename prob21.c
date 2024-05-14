#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n], min, max, i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    min = max = a[1];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    return 0;
}