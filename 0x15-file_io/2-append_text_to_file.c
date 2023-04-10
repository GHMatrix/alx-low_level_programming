#include "main.h"
/**
 * append_text_to_file - Program appends text at the end of a file
 * @filename: Pointer to the name of file
 * @text_content: string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (0);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	bytes_written = write(file_descriptor,
text_content, strlen(text_content));

	close(file_descriptor);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
