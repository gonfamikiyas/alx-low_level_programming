#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: On success - Pointer to the new string.
 *         On failure - NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
