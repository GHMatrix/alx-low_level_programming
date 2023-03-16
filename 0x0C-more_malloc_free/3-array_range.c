#include "main.h"
#include <stdlib.h>
/**
 * *array_range - Program creates array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: point to array
 */
int *array_range(int min, int max)
{
	int *mem;
	int a;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	mem = malloc(sizeof(int) * size);

	if (mem == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		mem[a] = min++;

	return (mem);
}
