#include <stdio.h>
#include <math.h>
#define PI 3.1415927
int main(void)
{
	double r, V;
	while ((scanf("%lf", &r)) != EOF)
	{
		V = (4.0 / 3) * PI * pow(r, 3);
		printf("%.3lf\n", V);
	}
	return 0;
}