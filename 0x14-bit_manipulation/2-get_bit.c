#include "main.h"

/**
 * get_bit - Returns the value
 * @decimal_num: int
 * @bit_index: int
 *
 * Return: Value a bit
 */
int get_bit(unsigned long int decimal_num, unsigned int bit_index)
{
	int bit_value;

	if (bit_index > 63)
		return (-1);

	bit_value = (decimal_num >> bit_index) & 1;

	return (bit_value);
}
