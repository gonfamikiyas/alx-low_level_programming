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
	int i, n;
	int l = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}

	for (i = n; i <= l; i++)
	{
		if (str[i] != '\0')
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
