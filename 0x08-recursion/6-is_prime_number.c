#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - Program checks if number is prime
 * @n: number to be considered
 * Return: 1 if prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Program determines if number is prime
 * @n: number to be considered
 * @i: iteration of times
 * Return: an integer
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
