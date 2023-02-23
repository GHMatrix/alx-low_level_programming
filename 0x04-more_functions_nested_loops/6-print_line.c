#include "main.h"
/**
 * print_line - Program draws a straight line
 * @n: Number of lines to draw the straight line
 * Retrun: 0 (Success)
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
