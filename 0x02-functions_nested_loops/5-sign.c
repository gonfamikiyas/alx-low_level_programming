#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *print_sign - Entery point
 *@s: string
 *Return: return 0 if run succesfully
 */
int print_sign(int s)
{
	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
