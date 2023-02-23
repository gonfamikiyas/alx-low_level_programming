#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_triangle - Entery point
 *@c: int
 *@d int
 *@f int
 *@g int
 *Return: return 0 if run succesfully
 */
void print_triangle(int c)
{
	int d, f, g;

	if (c <= 0)
	{
		_putchar('\n');
	} else
	{
		for (d = 0; d < c; d++)
		{
			for (g = 0; g < (c - d - 1); g++)
			{
				_putchar(32);
			}
			for (f = 0; f < (d + 1); f++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
