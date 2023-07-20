#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i++)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
