#include <stdio.h>
/**
 * _strlen - Programs returns length of a string.
 * @str: String whose length being considered
 * Return: length of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
