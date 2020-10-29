#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k, l, d;
	scanf_s("%d%d", &i,&j);
	d = i - 1;
	for (k = 0;k <= d;k++) {
		for (l = 0;l <= j;l++) {
			if (k == 0 || k == d)
				printf("+");
			else if (l == 0 || l == j)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;




}