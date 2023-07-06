#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask = 1UL << shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (!(n & mask))
	{
		mask >>= 1;
		shift--;
	}

	while (shift >= 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
		shift--;
	}
}

