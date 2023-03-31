#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - return value
 *@argc: int
 *@argv: char
 *@d - int
 *@c - int
 *Return: value
 */
int main(int argc, char **argv)
{
	int c, d;

	if (argc == 3)
	{
		d = atoi(*(argv + 2));
		c = atoi(*(argv + 1));
		printf("%d\n", c * d);
	}
	else
	{
		printf("Error \n");
	}
	exit(EXIT_SUCCESS);
}
