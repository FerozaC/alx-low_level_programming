#include "main.h"

/**
* get_endianness - checks if a machine is little or big endian
*
* Return: 0 if big, 1 if little
*/
int get_endianness(void)
{
int num = 1;
char *ptr = (char *)&num;

/* Returns 1 if the machine is little-endian, 0 otherwise. */
return (*ptr == 1);
}

