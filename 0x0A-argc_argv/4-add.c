#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
	int i, d;
	unsigned long int j;

	if (argc > 1)
	{
		d = 0;
		for (i = 1; i <= argc - 1; i++)
		{
			for (j = 0; j <= strlen(argv[i]) - 1; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
		d = d + atoi(*(argv + i));
		}
		printf("%d \n", d);
	}
	else if (argc <= 1)
	{
		printf("%d \n", 0);
	}
	return (0);
}
