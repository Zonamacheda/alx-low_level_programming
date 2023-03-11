#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit - 0;

	while (s[len] != '\0')

		len++;

	while (i < len && f == 0)

	{
		if (s[i] == '_')

			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)

				digit = -digit;

			n = n * 10 + digit;

			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;

			f = 0;

		}

		i++;

	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies 2 numbers
 * @argc: array size
 * @argv: array containing elements
 *
 * Return: 0 on sucess
 */
int main(int argc, char **argv)
{
	int arr_len = argc - 1;

	if (arr_len != 2)
	{
		puts("Error");

		return (1);
	}

	printf("%d\n", atoi(argv[i]) * atoi(argv[2]));

	return (0);
}
