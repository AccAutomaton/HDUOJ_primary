#include <stdio.h>
int main(void)
{
	int score;
	while ((scanf("%d", &score)) != EOF)
	{
		if (score >= 90 && score <= 100)
			printf("A\n");
		if (score >= 80 && score <= 89)
			printf("B\n");
		if (score >= 70 && score <= 79)
			printf("C\n");
		if (score >= 60 && score <= 69)
			printf("D\n");
		if (score >= 0 && score <= 59)
			printf("E\n");
		if (score < 0 || score > 100)
			printf("Score is error!\n");
	}
	return 0;
}