#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*print_array - check the code
*@a: int
*@n: int
*@i - int
*Return: Always 0.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != '\0')
		{
		printf("%d", a[i]);
		}
		if (i != (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
