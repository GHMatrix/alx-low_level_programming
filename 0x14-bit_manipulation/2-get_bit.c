#include "main.h"
/**
 * get_bit - Program returns vvalue of a bit at given index
 * @index: index of the bit
 * @n: number to be probed
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
