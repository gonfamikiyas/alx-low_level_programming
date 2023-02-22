#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *_isalpha - Entery point
 *@s: string
 *Return: return 0 if run succesfully
 */
int _isalpha(char s)
{
	if (isalpha(s))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
