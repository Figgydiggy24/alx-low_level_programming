#include "main.h"

/**
 * print_rev - will print a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int j = 0, i = 0;
	char str[500];

	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		s[i] = str[j];
		j++;
		i--;
	}
}
