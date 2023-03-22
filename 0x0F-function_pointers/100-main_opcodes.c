#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program prints  opcodes of the  main function
 *@argc: number of arguments
 *@argv: number of arrays of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes;
	int a;
	char *ben;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ben = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", ben[a]);
			break;
		}
		printf("%02hhx", ben[a]);
	}
	return (0);
}
