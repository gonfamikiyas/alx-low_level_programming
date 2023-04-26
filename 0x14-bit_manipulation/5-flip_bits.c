#include "main.h"

/**
 * flip_bits - Counts the number of bits
 * @num1: int
 * @num2: int
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int index, count = 0;
	unsigned long int current_bit;
	unsigned long int exclusive_or = num1 ^ num2;

	for (index = 63; index >= 0; index--)
	{
		current_bit = exclusive_or >> index;
		if (current_bit & 1)
			count++;
	}

	return (count);
}
