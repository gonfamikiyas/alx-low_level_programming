#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main - Entery point
 *@d int
 *Return: return 0 if run succesfully
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 3 == 0 && d % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (d % 3 == 0)
		{
			printf("Fizz ");
		} else if (d == 100)
		{
			printf("Buzz");
		} else if (d % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", d);
		}
	}
	printf("\n");
	return (0);
}
