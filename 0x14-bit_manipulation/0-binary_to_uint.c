#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts binary number to unsigned int
* @b: string with the binary number
*
* Return: converted number, or 0 if input is invalid
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val = 0;
size_t i;
char c;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
c = b[i];
if (c < '0' || c > '1')
return (0);

dec_val = (dec_val << 1) + (c - '0');
}

return (dec_val);
}

