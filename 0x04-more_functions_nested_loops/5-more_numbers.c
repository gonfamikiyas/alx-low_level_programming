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
		for (c = 48; c < 63; c++)
		{
			if (c < 58)
			{
				f = c;
			} else
			{
				f = 49;
			}
			_putchar(f);

			if (c > 57)
			{
				_putchar(c - 10);
			}
		}
	_putchar('\n');
	}
}
