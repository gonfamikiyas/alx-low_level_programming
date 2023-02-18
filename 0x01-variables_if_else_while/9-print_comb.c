#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entery point
*Return: return 0 if run succesfully
*/
int main(void)
{
	int l;

	for (l = 48; l < 58; l++)
	{
		putchar(l);
		if (l < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
