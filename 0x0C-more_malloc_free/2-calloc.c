#include "main.h"
#include <stdlib.h>
/**
 * _memset - Program that fills memory
 * @s: memory module
 * @b: characters
 * @n: number of copies
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - Program allocates memory for an array
 * @nmemb: number of elements
 * @size: size of element
 * Return: pointer to mememory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	_memset(mem, 0, nmemb * size);

	return (mem);
}
