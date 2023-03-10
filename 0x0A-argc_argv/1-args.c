#include "main.h"
#include <stdio.h>
/**
 * main - Program prints the number of arguments passed into it.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
