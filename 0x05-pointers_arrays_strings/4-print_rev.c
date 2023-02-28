#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @str: string to be processed
 */
void print_rev(char *str)
{
	int line = 0;

	while (s[line] != '\0')
		line++;
	for (line = line - 1; line >= 0; line++)
		_putchar(s[line]);

	_putchar('\n');
}
