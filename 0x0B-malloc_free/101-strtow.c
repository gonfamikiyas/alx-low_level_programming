#include <stdlib.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @s: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *s)
{
	int i, words = 0, flag = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
		{
			if (flag == 0)
			{
				words++;
			}
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	return (words);
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: On success - Pointer to the array of strings.
 *         On failure - NULL.
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j, k = 0, len = 0, words, c = 0, start, end;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (c == 0)
			{
				start = i;
			}
			c++;
		}
		else
		{
			if (c != 0)
			{
				end = i;
				tmp = malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					for (j = 0; j < k; j++)
					{
						free(matrix[j]);
					}
					free(matrix);
					return (NULL);
				}
				for (j = 0; j < c; j++)
				{
					tmp[j] = str[start + j];
				}
				tmp[j] = '\0';
				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
	}
	if (c != 0)
	{
		end = i;
		tmp = malloc(sizeof(char) * (c + 1));
		if (tmp == NULL)
		{
			for (j = 0; j < k; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < c; j++)
		{
			tmp[j] = str[start + j];
		}
		tmp[j] = '\0';
		matrix[k] = tmp;
		k++;
	}
	matrix[k] = NULL;
	return (matrix);
}

