#include <stdio.h>
int main(void)
{
	int t;
	double u, v, w, l;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%lf%lf%lf%lf", &u, &v, &w, &l);
		printf("%.3f\n", l / (v + u) * w);
	}
	return 0;
}