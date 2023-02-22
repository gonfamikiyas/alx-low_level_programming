#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - Entery point
 *@s: string
 *Return: return 0 if run succesfully
 */
int print_last_digit(int s)
{
	int c;

	c = abs(s % 10);
	_putchar('0' + c);
	return (c);
}
