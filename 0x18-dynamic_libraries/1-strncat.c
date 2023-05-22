#include "main.h"
/**
 * _strncat - Program concatenates two strings
 * @src: intput string
 * @dest: input string
 * @n: input number bytes from src
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
