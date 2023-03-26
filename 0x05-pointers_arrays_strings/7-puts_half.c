#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*puts_half - check the code
*@str: char
*@d - int
*@i - int
*@n - int
*Return: Always 0.
*/
void puts_half(char *str)
{
	int d = strlen(str);
	int i, n;

	if (d % 2 == 0)
	{
		n = d / 2;
	}
	else
	{
		n = (d - 1) / 2;
	}

	for (i = n; i <= d; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
