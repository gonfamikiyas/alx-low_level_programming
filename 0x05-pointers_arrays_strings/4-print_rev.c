#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*print_rev - check the code
*@s: int
*@i - int
*@d - int
*Return: Always 0.
*/
void print_rev(char *s)
{
	int d = strlen(s);
	int i;

	for (i = d - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
