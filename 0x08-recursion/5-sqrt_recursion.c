#include "main.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
/**
 *sqrt_ - return the value
 *@n: int
 *@i: int
 *Return: Always 0.
 */
int sqrt_(int i, int n)
{

	if (i >  n)
	{
		return (-1);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	i++;
	return (sqrt_(i, n));
}
/**
 * _sqrt_recursion - return value
 * @n: int
 * @c - int
 * Returns: Always 0.
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	int c;

	c = sqrt_(i, n);
	return (c);
}
