#include "main.h"
/**
 * _pow_recursion - Program to return of value of power
 * @x: value of number to be raised
 * @y: value of power
 * Return: value to be raised by y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
