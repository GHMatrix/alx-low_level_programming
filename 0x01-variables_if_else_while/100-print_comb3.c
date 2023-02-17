#include <stdio.h>
/**
 * main - Program prints possible combination of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int b = 0;

	while (b < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (b != i && b < i)
			{
				putchar('0' + b);
				putchar('0' + i);

				if (i + b != 17)
				{
					putchar(',');
					putchar(' ');
				}

			}
			i++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
