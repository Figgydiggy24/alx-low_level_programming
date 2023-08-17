#include <stdio.h>

/**
 * print_name - prints name using another function
 * @name: the name to print
 * @f: function pointer to work with
 *
 * Return: (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && f)
		(*f)(name);
}
