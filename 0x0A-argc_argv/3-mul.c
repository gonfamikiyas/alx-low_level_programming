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

	if (argc == 3)
	{
		d = 1;
		for (i = 1; i <= argc - 1; i++)
		{
			for (j = 0; j <= strlen(argv[i]) - 1; j++)
			{
				if (atoi(*(argv + i)) < 0)
				{
					d = -1 * d;
				}
				else if (!(isdigit(argv[i][j])))
				{
					printf("Error");
					printf("\n");
					return (1);
				}
			}
			d = d * atoi(*(argv + i));
		}
		printf("%d", d);
		printf("\n");
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}
