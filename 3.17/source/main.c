#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int a;
	double i, j, k, l, t;

	printf("Enter account number (-1 to end):\t");
	scanf_s("%d", &a);
	printf("Enter brginning balance:\t");
	scanf_s("%lf", &i);
	printf("Enter total charges:\t");
	scanf_s("%lf", &j);
	printf("Enter total credits:\t");
	scanf_s("%lf", &k);
	printf("Enter credit limit:\t");
	scanf_s("%lf", &l);

	printf("Account:\t%d \n", a);
	printf("Credit limit:%.2f \n", l);
	t = i + j - k;
	printf("Balance:\t %.2f \n", t);
	if (t > k)
		printf("Credit Limit Exceeded");
	else
		printf("%.2f", t);



	return 0;





}