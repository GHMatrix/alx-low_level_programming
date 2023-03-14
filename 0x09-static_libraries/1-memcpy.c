#include <ctype.h>
#include <string.h>
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
	return (memcpy(dest, src, n));
}
