#include "main.h"
/**
 * flip_bits - Program returns he number of bits you would need to flip
 * to get from one number to another
 * @m: number to consider
 * @n: number to consider
 * Return: Bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int number = 0;
	unsigned long int new;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		new = exclusive >> a;
		if (new & 1)
			number++;
	}
	return (number);
}
