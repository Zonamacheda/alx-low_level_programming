#include "main.h"

/**
 * _strchr - locates a character in a particular string
 *
 * @c: The occurence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int c;

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
