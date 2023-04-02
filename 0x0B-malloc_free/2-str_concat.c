#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: On success - Pointer to the concatenated string.
 *         On failure - NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;

	if (s1 != NULL)
	{
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
	}

	j = 0;

	if (s2 != NULL)
	{
		while (s2[j])
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}

	s3[i] = '\0';
	return (s3);
}
