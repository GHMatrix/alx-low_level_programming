#include "main.h"
/**
 * _strcpy - Program copies string
 * @src: where the string is pointed to
 * @dest: destination
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
