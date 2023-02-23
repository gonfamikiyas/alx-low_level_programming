#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_line - Entery point
 *@c int
 *@d int
 *Return: return 0 if run succesfully
 */
void print_line(int c)
{
	int d;

	for (d = 0; d < c; d++)
	{
		if (c <= 0)
		{
			continue;
		} else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
