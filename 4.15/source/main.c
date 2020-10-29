#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double a, r = 0.10, c = 0.105, d = 0.11, e = 0.115, f = 0.12, g, h, i, j;
	int y;
	scanf_s("%lf", &a);
	for(r=0.10;r<=0.12;r+=0.005){
		for (y = 0;y < 15;y++) {
			a = a * pow((1 + r), y)/pow((1+r),(y-1));
		}
	}
	printf("%f", a);


	return 0;

}