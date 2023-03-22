#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Program executes a function
 * @array: a given array
 * @size: number of elelments
 * @action: a pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
