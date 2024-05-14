#include <stdio.h>
int main()
{
	int s1, s2, s3, s4, s5, sum, per;
	printf("Enter Subject 1 Marks : ");
	scanf("%d", &s1);
	printf("Enter Subject 2 Marks : ");
	scanf("%d", &s2);
	printf("Enter Subject 3 Marks : ");
	scanf("%d", &s3);
	printf("Enter Subject 4 Marks : ");
	scanf("%d", &s4);
	printf("Enter Subject 5 Marks : ");
	scanf("%d", &s5);
	sum = s1 + s2 + s3 + s4 + s5;
	per = (sum * 100) / 500;
	printf("Total = %d\n", sum);
	printf("Percentage = %d percent\n", per);
	return 0;
}
