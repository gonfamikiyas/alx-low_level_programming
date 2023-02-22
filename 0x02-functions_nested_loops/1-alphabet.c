#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
*main - Entery point
*Return: return 0 if run succesfully
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
