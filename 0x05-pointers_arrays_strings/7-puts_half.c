#include "main.h"

/**
 * puts_half - will print the second half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j, i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (len % 2 == 0)
	{
		len = len / 2;
		for (j = len; j < len * 2; j++)
			_putchar(str[j]);
	}
	else if (len % 2 != 0)
	{
		len = (len / 2) + 1;
		for (j = len; j < (len * 2) - 1; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
