#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - return value
 *@argc: int
 *@argv: char
 *Return: value
 */
int main(int argc, char **argv)
{
	char i;

	i = strlen(*argv);
	if (i > 1)
	{
		printf("%d\n", argc - 1);
	}
	exit(EXIT_SUCCESS);
}
