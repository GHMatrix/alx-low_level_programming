#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program copies contents of one file to another
 * @argc: number of arguments
 * @argv: array of pointers of  arguments
 * Return: 0if successful, if error 1
 */
int main(int argc, char *argv[])
{
	FILE *from_file = NULL;
	FILE *to_file = NULL;
	char buffer[1024];
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(1);
	}

	from_file = fopen(argv[1], "r");
	if (from_file == NULL)
	{
		fprintf(stderr, "Error: Can't read from %s\n", argv[1]);
		exit(1);
	}

	to_file = fopen(argv[2], "w");
	if (to_file == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(1);
	}

	while ((bytes_read = fread(buffer, sizeof(char),
sizeof(buffer), from_file)) > 0)
	{
		bytes_written = fwrite(buffer, sizeof(char), bytes_read, to_file);
		if (bytes_written < bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(1);
		}
	}

	fclose(from_file);
	fclose(to_file);

	return (0);
}
