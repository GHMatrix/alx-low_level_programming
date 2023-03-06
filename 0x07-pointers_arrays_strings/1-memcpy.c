#include "main.h"
/**
 * _memcpy - Program copies memory area
 * @src: where memory is copied
 * @dest: destination where it is stored
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
