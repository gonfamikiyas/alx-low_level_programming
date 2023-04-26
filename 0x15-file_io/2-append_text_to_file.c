#include "main.h"

/**
 * append_text_to_file - Appends text at the end
 * @filename: Pointer
 * @text_content: The string
 *
 * Return: return fail or pass
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_status = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_status == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
