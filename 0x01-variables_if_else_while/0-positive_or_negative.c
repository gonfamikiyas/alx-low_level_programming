#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entery point
*Return: return 0 if run succesfully
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%u is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	else
	{
		printf("%u is zero\n", n);
	}
	return (0);
}
