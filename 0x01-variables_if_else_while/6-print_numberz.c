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

	for (l = 0; l < 10; l++)
	{
		putchar(48 + l);
	}
	putchar('\n');
	return (0);
}
