#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenates
 * Return: pointer to the new string created (success), or NULL (error)
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;

	int i, ci;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

		i = ci = 0;

	while (s2[ci] != '\0')

		ci++;

	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)

		return (NULL);

	i = ci = 0;

	while (s1[i] != '\0')
	{
		conc[i] = s1[i];

		i++;

	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];

		i++, ci++;
	}

	conct[i] = '\0';

	return (conct);

}
