#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	double b, t;
	printf("Enter # of hour worked (-1 to end):");
	scanf_s("%d", &a);
	printf("Enter hourly rate of the worker ($00.00):");
	scanf_s("%lf", &b);
	t = a * b;
	printf("Salary is $%.2f", t);




	return 0;


}