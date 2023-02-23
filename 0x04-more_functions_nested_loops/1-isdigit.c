#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *_isdigit - Entery point
 *@c: string
 *Return: return 0 if run succesfully
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
