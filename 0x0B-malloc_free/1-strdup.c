#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Program returns pointer to new string
 * @str: string to be considered
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ben;
	int a = 0;
	int b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;

	ben = malloc(sizeof(char) * (a + 1));

	if (ben == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		ben[b] = str[b];
	return (ben);
}
