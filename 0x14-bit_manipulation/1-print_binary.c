#include "main.h"
/**
 * print_binary - Program prints binary equivalent of a number
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int a;

	for (a = (sizeof(unsigned long int) * 8) - 1; a >= 0; a--)
	{
		if ((n >> a) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
