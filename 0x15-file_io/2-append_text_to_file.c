#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, 1.
 *         On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, text_length);
	close(file_descriptor);

	if (bytes_written == -1 || bytes_written != text_length)
		return (-1);

	return (1);
}

