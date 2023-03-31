#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *_islower - Entery point
 *@c: string
 *Return: return 0 if run succesfully
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
