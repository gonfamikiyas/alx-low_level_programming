#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*rev_string - check the code
*@s: int
*@d - int
*@temp - char
*@i - int
*Return: Always 0.
*/
void rev_string(char *s)
{
	int d = strlen(s);
	int i;
	char temp[11];

	for (i = 0; i <= d; i++)
	{
		temp[i] = s[i];
	}

	for (i = 0; i <= d; i++)
	{
		if (s[d - i] != 0)
		{
		s[i - 1] = temp[d - i];
		}
	}
}
