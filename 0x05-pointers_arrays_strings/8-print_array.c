#include "main.h"
#include <stdio.h>

/**
 * print_array - will print n elements in the array a
 * @a: The array to print
 * @n: The number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
