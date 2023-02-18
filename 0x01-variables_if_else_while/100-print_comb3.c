#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entery point
*Return: return 0 if run succesfully
*/
int main(void)
{
	int l, m;

	for (l = 0; l < 10; l++)
	{
		for (m = 0; m < 10; m++)
		{
			putchar((l % 10) + '0');
			putchar((m % 10) + '0');

			if (l == 9 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
