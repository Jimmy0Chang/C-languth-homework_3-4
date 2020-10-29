#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 1;i < 6;i++) {
		for (j = 1;j < (6 - i);j++) {
			printf(" ");
		}
		for (j = 1;j <= (-1 + 2 * i);j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1;i < 5;i++) {
		for (j = 1;j <= i;j++) {
			printf(" ");
		}
		for (j = 1;j <= (9-2*i);j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}