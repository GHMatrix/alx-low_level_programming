#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints all arguments it receives.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
