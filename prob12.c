#include <stdio.h>
int main()
{
	int sum = 0, n, i, rem;
	printf("Enter The Number : ");
	scanf("%d", &n);
	rem = n;
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf("Sum Of All Numbers Upto %d Is = %d\n", rem, sum);
	return 0;
}
