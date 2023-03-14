#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - Program fills a memory with constant byte
 * @s: address of memory to be filled
 * @b: constant byte
 * @n: number of bytes of memory area to be filled
 *
 * Return: new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

