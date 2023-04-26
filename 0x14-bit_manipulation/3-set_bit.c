#include "main.h"

/**
 * set_bit - Sets a bit
 * @decimal_num_ptr: Pointer
 * @bit_index: int
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *decimal_num_ptr, unsigned int bit_index)
{
	if (bit_index > 63)
		return (-1);

	*decimal_num_ptr = ((1UL << bit_index) | *decimal_num_ptr);
	return (1);
}
