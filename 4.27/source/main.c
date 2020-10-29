#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, j, k, l, r=100 , o=10;
	for (i = 1;i <= 500;i++) 
	{
		for (j = 1;j <= 500;j++) 
		{
			k = i * i;
			l = j * j;	
			if (r == k + l)
				break;
		}
			if (r == k + l)
				break;
	}
	printf("%d¡B%d¡B%d", i, j , o);
	return 0;



}