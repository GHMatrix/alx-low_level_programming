#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program prints its name with new line
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
