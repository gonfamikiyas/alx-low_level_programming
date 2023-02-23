#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *more_numbers - Entery point
 *@c int
 *@d int
 *@f int
 *Return: return 0 if run succesfully
 */
void more_numbers(void)
{
	int c, d, f;

	for (d = 0; d < 10; d++)
	{
		for (c = 48; c < 58; c++)
		{
			_putchar(c);
		}
		_putchar(49);
		_putchar(48);
		for (f = 48; f < 53; f++)
		{
			_putchar(49);
			_putchar(f + 1);
		}
	_putchar('\n');
	}
}
