#include <stdio.h>
#include <stdlib.h>

int mmm_1()
{
	int i, j, k, l;
	printf("(A)\n");
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			if (i >= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}