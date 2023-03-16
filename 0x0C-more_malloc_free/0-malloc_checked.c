#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Program that allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *bat;

	bat = malloc(b);

	if (bat == NULL)
		exit(98);

	return (bat);
}
