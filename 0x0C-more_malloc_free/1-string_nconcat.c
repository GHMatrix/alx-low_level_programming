#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - Program concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		c = malloc(sizeof(char) * (len1 + n + 1));
	else
		c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!c)
		return (NULL);

	while (a < len1)
	{
		c[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		c[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		c[a++] = s2[b++];

	c[a] = '\0';

	return (c);
}
