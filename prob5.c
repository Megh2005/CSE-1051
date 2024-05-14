#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter First Number : ");
	scanf("%d", &a);
	printf("Enter Second Number : ");
	scanf("%d", &b);
	if (a == b)
	{
		printf("These Two Numbers Are Equal\n");
	}
	else
		printf("These Two Numbers Are Not Equal\n");
	return 0;
}
