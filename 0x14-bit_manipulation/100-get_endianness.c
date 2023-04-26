#include "main.h"

/**
 * get_endianness - Checks the value
 * Return: return 0
 */
int get_endianness(void)
{
	unsigned int test_num = 1;
	char *byte_ptr = (char *) &test_num;

	return (*byte_ptr);
}
