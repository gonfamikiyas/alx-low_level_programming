#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entery point
*Return: return 0 if run succesfully
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
