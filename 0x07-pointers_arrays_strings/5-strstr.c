#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: if the substring is located - a pointer to the beginning of string
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
