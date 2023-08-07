#include "main.h"

/**
 * _strcpy - it copies string pointed to by src to buffer pointed to by dest
 * @src: the source to copy
 * @dest: the destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
