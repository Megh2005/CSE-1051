#include <stdio.h>
int main()
{
	float per;
	printf("Enter Percentage : ");
	scanf("%f", &per);
	if (per >= 1 && per < 60)
		printf("Grade : D\n");
	else if (per >= 60 && per < 80)
		printf("Grade : C\n");
	else if (per >= 80 && per < 90)
		printf("Grade : B\n");
	else if (per >= 90 && per < 100)
		printf("Grade : A\n");
	else
		printf("Invalid Input\n");
	return 0;
}
