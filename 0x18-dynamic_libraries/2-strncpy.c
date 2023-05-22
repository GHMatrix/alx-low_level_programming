#include "main.h"
/**
 * _strncpy - Progam copies a string
 * @src: string input
 * @dest: string input
 * @n: value of number
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
