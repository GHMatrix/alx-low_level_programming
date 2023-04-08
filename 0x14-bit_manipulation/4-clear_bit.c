#include "main.h"
/**
 * clear_bit - Program sets the value of a bit to zero at a given index
 * @index: index from 0
 * @n: number to change
 * Return: 1 if success,-1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
