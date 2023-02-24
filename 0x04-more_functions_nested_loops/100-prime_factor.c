#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long a, b, c = 612852475143;
	double square = sqrt(c);

	for (a = 1; a <= square; a++)
	{
		if (c % a == 0)
		{
			b = c / a;
		}
	}
	printf("%ld\n", b);
	return (0);
}
