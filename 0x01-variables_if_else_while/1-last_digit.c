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
	int l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (l > 5)
	{
		printf("Last digit of %d is %d and greather than 5 \n", (n, l));
	}
	else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", (n, l));
	}
	else
	{
		printf("Last digit of %d is 0 and is 0 \n", n);
	}
	return (0);
}
