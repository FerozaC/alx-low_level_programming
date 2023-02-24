#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Prints lines, draws a straight line
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

