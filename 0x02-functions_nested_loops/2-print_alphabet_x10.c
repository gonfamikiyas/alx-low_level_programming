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
	int x;

	for (x = 0; x < 10; x++)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		putchar('\n');
	}
}
