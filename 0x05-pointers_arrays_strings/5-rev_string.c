#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*rev_string - check the code
*@s: int
*@c - int
*@d - int
*Return: Always 0.
*/
void rev_string(char *s)
{
	int d = strlen(s);
	int c = d;
	int g;


	while (c >= 0)
	{
		g = d - c;
		*(s + g) = s[c];
		c--;
	}
}
