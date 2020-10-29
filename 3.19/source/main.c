#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d;
	double a, b, c, t;
	printf("Enter loan principal :");
	scanf_s("%lf", &a);
	printf("Enter interest rate :");
	scanf_s("%lf", &b);
	printf("Enter term of the loan in days:");
	scanf_s("%d", &d);
	t = a * b * d / 365;
	printf("The interest charge is $%.2f", t);





	return 0;
}