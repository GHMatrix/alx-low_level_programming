#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Program prints numbers, followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 * @....: variable numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int ind;

	va_start(numbers, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(numbers, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
