#include "main.h"

/**
 * create_file - creates file and writes string to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		if (write(f, text_content, len) != len)
		{
			close(f);
			return (-1);
		}
	}

	close(f);

	return (1);
}
