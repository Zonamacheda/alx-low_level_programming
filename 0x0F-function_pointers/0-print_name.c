#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointers to function
 * @name: string to add
 * @f: pointers to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
