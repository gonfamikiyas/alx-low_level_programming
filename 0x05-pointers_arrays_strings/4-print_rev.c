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
	int c;


	for (c = d; c != 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
