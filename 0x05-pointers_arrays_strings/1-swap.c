#include <stdio.h>
/**
 * swap_int - Program swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
