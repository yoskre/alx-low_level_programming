#include "main.h"
#include <stddef.h>
#include <limits.h>
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: integer
 * @index: index of bit, 0 is first bit from left
 *
 * Return: new @n
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t l = sizeof(*n);
	size_t i;
	unsigned long int shift = 0x1;

	if (n == NULL)
		return (-1);
	if ((index + 1) / 8 > l)
		return (-1);
	shift = shift << index;
	return (*n = (*n | shift));
}
