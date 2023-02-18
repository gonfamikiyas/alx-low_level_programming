#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entery point
*Return: return 0 if run succesfully
*/
int main(void)
{
	char l[] = "0123456789";
	int i = 0;

	while (l[i] != '\0')
	{
		putchar(l[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
