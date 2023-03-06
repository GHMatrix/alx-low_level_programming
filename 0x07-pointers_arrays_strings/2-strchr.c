#include "main.h"
/**
 * _strchr - Program locates a character in a string
 * @s: string under review
 * @c: character in the string
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
