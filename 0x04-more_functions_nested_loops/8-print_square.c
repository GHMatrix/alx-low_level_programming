#include "main.h"
/**
 * print_square - Program prints a square, followed by a new line
 * @size: Number of squares for size
 * Return: Nothing (Success)
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
		else
		{
			for (a = 0; a < size; a++)
			{
				for (b = 0; b < size; b++)
				{
					_putchar(35);
				}
				_putchar('\n');
			}
		}
}
