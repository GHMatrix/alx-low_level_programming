#include <stdio.h>
/**
 * main - Prints first 52 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;
	long b = 1;
	long c = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%d", b);
		else if (a == 1)
			printf(", %d", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %d", c);
		}
			a++
		}
		printf("\n');
		return (0);
}
