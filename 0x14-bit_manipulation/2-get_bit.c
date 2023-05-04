#include "main.h"
#include <stddef.h>
#include <limits.h>
/**
 * get_bit - return value of a bit in an integer
 * @n: integer
 * @index: index of bit, 0 is first bit from left
 *
 * Return: value of @index bit in @n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t l = sizeof(n);

	if ((index + 1) / 8 > l)
		return (-1);
	n = n >> index;
	return ((n & 1) ? 1 : 0);
}
