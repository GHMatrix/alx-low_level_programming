#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Program concatenates two strings
 * @s1: first string to be considered
 * @s2: second string to be considered
 * Return: concatenated s1 with s2
 */
char *str_concat(char *s1, char *s2)
{
	char *beans;

	int a;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	beans = malloc(sizeof(char) * (a + b + 1));

	if (beans == NULL)
		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
		beans[a] = s1[a];
			a++;
	}
	while (s2[b] != '\0')
	{
		beans[a] = s2[b];
		a++, b++;
	}
	beans[a] = '\0';

	return (beans);
}
