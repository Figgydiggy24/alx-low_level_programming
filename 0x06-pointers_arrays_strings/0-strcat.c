#include "main.h"

/**
 * _strcat - Will concatenate two strings
 * @dest: The destination string
 * @src: The source string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
