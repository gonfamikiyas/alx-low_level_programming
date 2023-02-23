#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_diagonal - Entery point
 *@c: int
 *@d int
 *@f int
 *Return: return 0 if run succesfully
 */
void print_diagonal(int c)
{
	int d, f;

	for (d = 0; d < c; d++)
	{
		if (c <= 0)
		{
			continue;
		} else
		{
			for (f = 0; f < d; f++)
			{
				_putchar(32);
			}
		_putchar(92);
		}
	_putchar('\n');
	}
}
