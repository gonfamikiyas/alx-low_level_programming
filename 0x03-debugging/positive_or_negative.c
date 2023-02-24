#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*positive_or_negative - Entery point
*Return: return 0 if run succesfully
*/
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
