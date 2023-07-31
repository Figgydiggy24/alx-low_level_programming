#include "main.h"

/**
 ** _memset - it fills he memory with a constatnt byte
 *@s: The memory area to be filled
 *@b: the character to copy
 *@n: The number of times to copy b
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int 1;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
