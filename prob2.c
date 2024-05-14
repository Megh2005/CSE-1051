#include <stdio.h>
int main()
{
	float p, t, r, si;
	printf("Enter Principal Amount : ");
	scanf("%f", &p);
	printf("Enter Time : ");
	scanf("%f", &t);
	printf("Enter Interest Rate : ");
	scanf("%f", &r);
	si = (p * t * r) / 100;
	printf("Simple Interest = %.2f\nAmount = %.2f\n", si, (si + p));
	return 0;
}
