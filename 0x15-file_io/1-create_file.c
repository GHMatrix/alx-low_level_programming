#include "main.h"
/**
 * create_file - Program creates a file
 * @filename: a pointer to the file
 * @text_content: string to write the file terminated by NULL
 * Return: -1 if filename is NULL, if success 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		int length = strlen(text_content);

		if (write(file_descriptor, text_content, length) < 0)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
