#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*jack_bauer - Entery point
*Return: return 0 if run succesfully
*/
void jack_bauer(void)
{
	int x = 0;
	int l, m, n;

	while (x <= 2)
	{
		l = 0;
		while (l <= 9)
		{
			if (x == 2 &&  l == 4)
			{
				break;
			}	
			m = 0;
			while (m <= 5)
			{
				n = 0;
				while (n <= 9)
				{
					_putchar('0' + x);
					_putchar('0' + l);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + n);
					_putchar('\n');
					n++;
				}
				m++;
			}
			l++;
		}
	x++;
	}
}
