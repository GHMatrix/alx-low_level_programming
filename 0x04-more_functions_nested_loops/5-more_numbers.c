#include "main.h"
/**
 * more_numbers - 10 times the numbers, from 0 to 14, followed by a new line
 * Return: 10 times numbers from 0 to 14
 */
void more_numbers(void)
{
	int b;
	int c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
