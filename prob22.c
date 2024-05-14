#include <stdio.h>
int main()
{
    int search, i, n, flag = 0;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter element no. %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter element to search : ");
    scanf("%d", &search);
    for (i = 1; i <= n; i++)
    {
        if (a[i] == search)
        {
            printf("Element present at location no. : %d\n", i);
            flag = 1;
        }
    }
    if (flag != 1)
    {
        printf("Element Unavailable\n");
    }
    return 0;
}