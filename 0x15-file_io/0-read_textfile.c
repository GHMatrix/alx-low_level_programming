#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * read_textfile - Program reads text file and prints to POSIX
 * standard output
 * @filename: name of text file being read
 * @letters: number of letters it should read
 * Return: number of letters it could read and print
 * 0 if filename is NULL, write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;

	ssize_t FileDescriptor;

	ssize_t TotalCount;

	ssize_t WriteCount;

	FileDescriptor = open(filename, O_RDONLY);
	if (FileDescriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	TotalCount = read(FileDescriptor, buffer, letters);
	WriteCount = write(STDOUT_FILENO, buffer, TotalCount);

	free(buffer);
	close(FileDescriptor);
	return (WriteCount);
}
