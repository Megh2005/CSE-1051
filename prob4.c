#include <stdio.h>
int main()
{
	float c, f;
	printf("Enter Temperature in Celcius : ");
	scanf("%f", &c);
	f = ((9 * c) + 160) / 5;
	printf("Temperature in Farenhite : %.2f\n", f);
	return 0;
}
