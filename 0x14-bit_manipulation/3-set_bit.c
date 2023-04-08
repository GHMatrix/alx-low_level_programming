#include "main.h"
/**
 * set_bit - Program set the value of a bit to 1 at a given index
 * @index: index of the bit to be set to 1
 * @n: number to be changed
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
