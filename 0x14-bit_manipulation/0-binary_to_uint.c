#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @bin_str: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *bin_str)
{
	int index;
	unsigned int decimal_value = 0;

	if (!bin_str)
		return (0);

	for (index = 0; bin_str[index]; index++)
	{
		if (bin_str[index] < '0' || bin_str[index] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (bin_str[index] - '0');
	}

	return (decimal_value);
}
