#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
*print_alphabet_x10 - Entery point
*Return: return 0 if run succesfully
*/
void print_alphabet_x10(void)
{
	char l = 'a';
	int x = 0;

	while (x <= 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
	x++;
	putchar('\n');
	}
}
