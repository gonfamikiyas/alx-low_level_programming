#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *_islower - Entery point
 *@s: string
 *Return: return 0 if run succesfully
 */
int _islower(char s)
{
	if (islower(s))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
