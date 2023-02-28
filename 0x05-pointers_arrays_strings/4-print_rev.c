#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*print_rev - check the code
*@s: int
*@c - int
*@d - int
*Return: Always 0.
*/
void print_rev(char *s)
{
	int d = strlen(s);
	int c = d;


	while (c > -1)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
