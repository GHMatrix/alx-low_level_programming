#include "main.h"
/**
 * _islower - Program checks for lowercase characters
 * @c: character being checked
 * Return: 1 for lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
