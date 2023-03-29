#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*factorial - check the code
*@n: int
*@i - int
*Return: Always 0.
*/
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	i = (n * factorial(n - 1));
	return (i);
}
