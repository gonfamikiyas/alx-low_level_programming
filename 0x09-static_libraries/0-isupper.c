#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *_isupper - Entery point
 *@c: string
 *Return: return 0 if run succesfully
 */
int _isupper(int c)
{
	if (islower(c))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
