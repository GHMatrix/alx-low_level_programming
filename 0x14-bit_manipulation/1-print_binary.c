#include "main.h"
/**
 * print_binary - Program prints binary equivalent of a number
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int a;
	int num = 0;
	unsigned long int number_now;

	for (a = 63; a >= 0; a--)
	{
		number_now = n >> a;

		if (number_now & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
