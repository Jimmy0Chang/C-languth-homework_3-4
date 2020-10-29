#include <stdio.h>
#include <stdlib.h>

int mmm_2()
{
	int i, j, k, l;
	printf("(B)\n");
	for (i = 0;i < 10;i++) {
		for (j = 10;j > 0;j--) {
			if (j-1 >= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
	}








