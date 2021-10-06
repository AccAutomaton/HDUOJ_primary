#include <stdio.h>
int f(char x);
int main(void)
{
	char a;
	int y, T;
	while (scanf("%d", &T) != EOF)
	{
		getchar();
		while (T--)
		{
			scanf("%c %d", &a, &y);
			getchar();
			printf("%d\n", f(a) + y);
		}
	}
	return 0;
}
int f(char x)
{
	if (x == 'A')
		return 1;
	if (x == 'B')
		return 2;
	if (x == 'C')
		return 3;
	if (x == 'D')
		return 4;
	if (x == 'E')
		return 5;
	if (x == 'F')
		return 6;
	if (x == 'G')
		return 7;
	if (x == 'H')
		return 8;
	if (x == 'I')
		return 9;
	if (x == 'J')
		return 10;
	if (x == 'K')
		return 11;
	if (x == 'L')
		return 12;
	if (x == 'M')
		return 13;
	if (x == 'N')
		return 14;
	if (x == 'O')
		return 15;
	if (x == 'P')
		return 16;
	if (x == 'Q')
		return 17;
	if (x == 'R')
		return 18;
	if (x == 'S')
		return 19;
	if (x == 'T')
		return 20;
	if (x == 'U')
		return 21;
	if (x == 'V')
		return 22;
	if (x == 'W')
		return 23;
	if (x == 'X')
		return 24;
	if (x == 'Y')
		return 25;
	if (x == 'Z')
		return 26;
	if (x == 'a')
		return -1;
	if (x == 'b')
		return -2;
	if (x == 'c')
		return -3;
	if (x == 'd')
		return -4;
	if (x == 'e')
		return -5;
	if (x == 'f')
		return -6;
	if (x == 'g')
		return -7;
	if (x == 'h')
		return -8;
	if (x == 'i')
		return -9;
	if (x == 'j')
		return -10;
	if (x == 'k')
		return -11;
	if (x == 'l')
		return -12;
	if (x == 'm')
		return -13;
	if (x == 'n')
		return -14;
	if (x == 'o')
		return -15;
	if (x == 'p')
		return -16;
	if (x == 'q')
		return -17;
	if (x == 'r')
		return -18;
	if (x == 's')
		return -19;
	if (x == 't')
		return -20;
	if (x == 'u')
		return -21;
	if (x == 'v')
		return -22;
	if (x == 'w')
		return -23;
	if (x == 'x')
		return -24;
	if (x == 'y')
		return -25;
	if (x == 'z')
		return -26;
}