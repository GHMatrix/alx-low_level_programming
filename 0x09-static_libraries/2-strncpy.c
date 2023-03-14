#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - Progam copies a string
 * @src: string input
 * @dest: string input
 * @n: value of number
 * Return: 0
 */


char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
