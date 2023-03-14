#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - Program locates a substring
 * @haystack: String to be considered
 * @needle: Substring to be considered
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

