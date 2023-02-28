#include "main.h"

/**
 * puts_half - prints half of string
 * @str: input
 */
void puts_half(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	str -= (l / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
