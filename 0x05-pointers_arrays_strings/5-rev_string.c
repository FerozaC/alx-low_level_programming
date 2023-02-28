#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be processed
 */
void rev_string(char *str)
{
	char reverse = str[0];
	int count = 0;
	int i;

	while (str[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		reverse = str[i];
		str[i] = str[count];
		str[counter] = reverse;
	}
}


