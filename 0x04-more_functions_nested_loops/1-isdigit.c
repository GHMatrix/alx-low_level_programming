#include "main.h"
/**
 * _isdigit - checks for digit 0 through to 9
 * @c: The number to be checked
 * Return: 1 for digit and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
