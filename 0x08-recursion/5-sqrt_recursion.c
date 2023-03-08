#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Program determines square root of number
 * @n: number whose square root to be determined
 * Return: square root
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Program shows natural square root of number
 * @n: number whose square root is to be found
 * @i: iteration of number
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
