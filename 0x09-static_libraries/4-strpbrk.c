#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - Program searches for string
 * @s: string to be considered
 * @accept: input in bytes
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
