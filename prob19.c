#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of elements : ");
    scanf("%d", &n);
    int arr[n], i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        printf("Enter Element No. %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}