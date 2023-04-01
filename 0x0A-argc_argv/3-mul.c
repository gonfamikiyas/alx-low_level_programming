#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - return value
 *@argc: int
 *@argv: char
 *@d - int
 *@c - int
 *@i - int
 *Return: value
 */
int main(int argc, char **argv)
{
	int i, c, d;

	if (argc == 3)
	{
		d = atoi(*(argv + 2));
		c = atoi(*(argv + 1));
		i = c * d;
		printf("%d\n", i);
	}
	else
	{
		printf("Error \n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
