#include "main.h"
/**
 * factorial - Program returns facotrial of a number
 * @n: number for factorial calculation
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
