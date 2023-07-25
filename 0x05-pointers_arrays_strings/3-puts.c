#include "main.h"

/**
 * _puts - will print a string to stdout
 * @str: string to print out
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
