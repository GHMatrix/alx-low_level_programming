#include "main.h"
/**
 * print_diagonal - Program draws a diagonal line
 * @n: number of times char \ should be printed
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int b;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			for (c = 0; c < b; c++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('n\');
		}
	}
}
