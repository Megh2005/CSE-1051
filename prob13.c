#include <stdio.h>
int main()
{
	int a, i, f = 0;
	printf("Enter A Number = ");
	scanf("%d", &a);
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("It is not a prime number\n");
			f++;
			break;
		}
	}
	if (f == 0)
	{
		printf("It is a prime number\n");
	}
	return 0;
}
