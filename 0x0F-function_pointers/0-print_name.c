#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Program prints a name
 * @name: string to be included
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
