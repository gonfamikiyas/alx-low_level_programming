#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*puts2 - check the code
*@str: char
*@d - int
*@i - int
*Return: Always 0.
*/
void puts2(char *str)
{
	int d = strlen(str);
	int i;

	for (i = 0; i <= d; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
