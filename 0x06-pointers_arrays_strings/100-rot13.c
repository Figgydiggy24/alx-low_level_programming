#include "main.h"

/**
 * rot13 - function to encode a string into rot13
 * @s: The string to encode
 * Return: The address of s
 */

char *rot13(char *s)
{
	int e, f;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (e = 0; *(s + e); e++)
	{
		for (f = 0; f < 52; f++)
		{
			if (a[f] == *(s + e))
			{
				*(s + e) = b[f];
				break;
			}
		}
	}
	return (s);
}
