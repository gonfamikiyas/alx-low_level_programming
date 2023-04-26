#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0
 * @decimal_num_ptr: Pointer to the number to change
 * @bit_index: Index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *decimal_num_ptr, unsigned int bit_index)
{
	if (bit_index > 63)
		return (-1);

	*decimal_num_ptr = (~(1UL << bit_index) & *decimal_num_ptr);
	return (1);
}
