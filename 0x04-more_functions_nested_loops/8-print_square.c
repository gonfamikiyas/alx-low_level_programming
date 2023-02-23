#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_square - Entery point
 *@c: int
 *@d int
 *@f int
 *Return: return 0 if run succesfully
 */
void print_square(int c)
{
	int d, f;

	if (c <= 0)
	{
		_putchar('\n');
	} else
	{
		for (d = 0; d < c; d++)
		{
			for (f = 0; f < c; f++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
