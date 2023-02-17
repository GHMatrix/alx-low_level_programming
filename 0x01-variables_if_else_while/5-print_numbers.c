#include <stdio.h>
/**
 * main - Program to print numbers of base10 then a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
