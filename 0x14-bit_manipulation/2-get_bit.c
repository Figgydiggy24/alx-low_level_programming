#include "main.h"


/**
 * get_bit_len - will return the number bit in a number
 *
 * Return: the number of bits
 */

unsigned int get_bit_len(void)
{
	unsigned int len = sizeof(unsigned long int) * 8;

	return (len);
}

/**
 * get_bit - returns a bit at nth index
 * @n: this is the number to be check
 * @index: this is the index to check for
 *
 * Return: index or -1 if not exist
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = get_bit_len();
	int bit;

	if (index >= idx)
		return (-1);

	bit = (n & (1 << index)) >> index;

	return (bit);
}
