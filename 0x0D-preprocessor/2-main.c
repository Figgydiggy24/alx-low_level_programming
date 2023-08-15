#include <stdio.h>

/**
 * main - prints the name of the file the program was compiled from followed by a new line.
 * return: (0)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
