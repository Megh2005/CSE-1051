#include <stdio.h>
int main()
{
	int n, r, out = 0;
	printf("Enter A Number : ");
	scanf("%d", &n);
	while (n > 0)
	{
		r = n % 10;
		out = (out * 10) + r;
		n = n / 10;
	}
	printf("Reverse : %d\n", out);
	return 0;
}
