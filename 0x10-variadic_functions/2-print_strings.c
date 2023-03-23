#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Program prints strings followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @....: variable number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *ben;
	unsigned int ind;

	va_start(string, n);

	for (ind = 0; ind < n; ind++)
	{
		ben = va_arg(string, char *);

		if (ben == NULL)
			printf("(nil)");
		else
			printf("%s", ben);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
