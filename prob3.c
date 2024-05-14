#include <stdio.h>
int main()
{
	float r, area, perimeter;
	printf("Enter Radius : ");
	scanf("%f", &r);
	perimeter = 2 * 3.141 * r;
	area = 3.141 * r * r;
	printf("Circumference = %.3f\nArea = %.3f\n", perimeter, area);
	return 0;
}
