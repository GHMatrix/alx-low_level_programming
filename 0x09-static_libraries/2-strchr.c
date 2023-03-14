#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - Program locates a character in a string
 * @s: string under review
 * @c: character in the string
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
