#include "main.h"
/**
 * _isupper - Checks if uppercase
 * @c: Number to be checked
 * Return: 1 for upper 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
