#include "main.h"
/**
 * _puts - Program prints a string followed by new line
 * @str: String to print
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
