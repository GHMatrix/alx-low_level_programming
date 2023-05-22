#include "main.h"
/**
 * _isalpha - checks for alphabetic characteir
 * @c: char being chacked
 * Return: 1 if char is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
