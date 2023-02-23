#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_most_numbers - Entery point
 *Return: return 0 if run succesfully
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		} else {
			_putchar(c);
		}
	}
	_putchar('\n');
}
