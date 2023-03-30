#include "main.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
/**
 *sqrt_ - return the value
 *@c: int
 *@v: int
 *@i: int
 *Return: Always 0.
 */
int sqrt_(int c, int i, int v)
{

	if (i >  v)
	{
		return (c);
	}
	else if (v % i == 0)
	{
		c++;
	}
	i++;
	return (sqrt_(c, i, v));
}
/**
 * is_prime_number - return value
 * @n: int
 * @i - int
 * @d - int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i = 1;
	int d = 0;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		d = sqrt_(d, i, n);
		if (d > 2)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
