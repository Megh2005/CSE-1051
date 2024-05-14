#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter Value of A : ");
	scanf("%d", &a);
	printf("Enter Value of B : ");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("A = %d\nB = %d\n", a, b);
	return 0;
}
