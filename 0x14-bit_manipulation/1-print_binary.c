#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void print_binary(unsigned long int n)
{

unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leading_0 = 1;

while (m > 0)
{
if ((n & m) != 0)
leading_0 = 0;

if (!leading_0)
_putchar((n & m) ? '1' : '0');

m >>= 1;
}

if (leading_0)
_putchar('0');
}

