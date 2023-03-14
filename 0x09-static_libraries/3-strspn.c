#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - Program gets the length of prefix substring
 * @s: string to be considered
 * @accept: input string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
