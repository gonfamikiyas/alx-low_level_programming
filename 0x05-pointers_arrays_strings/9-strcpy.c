#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*print_array - check the code
*@a: int
*@n: int
*@i - int
*Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	int n = strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		strcpy(src[i], dest[i]);
	}
	return dest;
}
