#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints contents to the standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of characters to read and print
 *
 * Return: number of bytes read and printed/0 if error occurs or no bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(f);
		return (0);
	}

	bytes_read = read(f, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(f);

	if (bytes_written == -1 || (size_t)bytes_read > letters)
		return (0);

	return (bytes_written);
}

