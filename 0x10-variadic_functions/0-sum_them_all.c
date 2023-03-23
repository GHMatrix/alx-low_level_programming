#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Program returns sum of all in parenthesis
 * @n: number parameters
 * @....: variable number of parameters
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list be;
	unsigned int a, sum = 0;

	va_start(be, n);

	for (a = 0; a < n; a++)
		sum += va_arg(be, int);

	va_end(be);

	return (sum);
}
