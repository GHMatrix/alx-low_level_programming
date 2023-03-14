#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - Program concatenates two strings
 * @src: intput string
 * @dest: input string
 * @n: input number bytes from src
 * Return: 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
