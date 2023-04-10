#include "main.h"

/**
* print_binary - prints the binary representation of a decimal number
* @n: decimal number to convert to binary
*
* Return: void
*/
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) ? '1' : '0');
}
