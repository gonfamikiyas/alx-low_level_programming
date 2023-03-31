#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *_isupper - Entery point
 *@s: string
 *Return: return 0 if run succesfully
 */
int _isupper(char s)
{
	if (islower(s))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
