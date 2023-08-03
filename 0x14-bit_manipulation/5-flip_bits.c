#include "main.h"
/**
 * flip_bits - Returns the number of bits that differ between two unsigned long
 *             integers.
 *
 * @num1: The first unsigned long integer.
 * @num2: The second unsigned long integer.
 *
 * Return: The number of differing bits.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int mask = 1, differing_bits = num1 ^ num2;
	unsigned int num_differing_bits = 0, bit_index;

	for (bit_index = 0; bit_index < (sizeof(unsigned long int) * 8); bit_index++)
	{
		if ((differing_bits >> bit_index) & mask)
			num_differing_bits++;
	}

	return (num_differing_bits);
}
