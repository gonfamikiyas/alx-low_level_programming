#include "main.h"

/**
 * print_binary - Prints the binary a decimal number
 * @decimal_num: Number
 */
void print_binary(unsigned long int decimal_num)
{
	int index, count = 0;
	unsigned long int current_bit;

	for (index = 63; index >= 0; index--)
	{
		current_bit = decimal_num >> index;

		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
