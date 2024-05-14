#include <stdio.h>
int main()
{
	float a, b;
	int opr;
	printf("Enter First Operand : ");
	scanf("%f", &a);
	printf("Enter Second Operand : ");
	scanf("%f", &b);
	printf("1=Add\n2=Subtract\n3=Multiply\n4=Divide\n5=Exit");
	printf("Enter Operator Number : ");
	scanf("%d", &opr);
	switch (opr)
	{
	case 1:
		printf("Sum = %.2f\n", a + b);
		break;
	case 2:
		printf("Difference = %.2f\n", a - b);
		break;
	case 3:
		printf("Product = %.2f\n", a * b);
		break;
	case 4:
		printf("Quotient = %.2f\n", a / b);
		break;
	default:
		printf("Invalid Input\n");
	}
	return 0;
}
