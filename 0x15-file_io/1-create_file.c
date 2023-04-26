#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to the name of a file
 * @text_content: Pointer to the string
 *
 * Return: return -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_status == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
