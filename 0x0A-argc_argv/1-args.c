#include <stdio.h>

/**
 * main - Will print number of arguments
 * @argc: The argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
