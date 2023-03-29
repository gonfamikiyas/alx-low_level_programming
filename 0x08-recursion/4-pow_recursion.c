#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_pow_recursion - check the code
*@x: int
*@y: int
*@i - int
*Return: Always 0.
*/
int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	y = y - 1;
	i = (x * _pow_recursion(x, y));
	return (i);
}
