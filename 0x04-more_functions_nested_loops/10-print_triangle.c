#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int h, i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < size; h++)
		{
			for (i = size - h; i > 1; i--)
			{
				_putchar(32);
			}
			for (j = 0; j <= h; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

