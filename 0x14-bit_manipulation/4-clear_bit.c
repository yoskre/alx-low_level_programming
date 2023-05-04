#include "main.h"
#include <stddef.h>
#include <limits.h>
/**
 * clear_bit - set value of a bit to 0 at a given index
 * @n: integer
 * @index: index of bit, 0 is first bit from left
 *
 * Return: 1 or -1 in case of error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t l = sizeof(*n);
	unsigned long int shift = 0x1;

	if (n == NULL)
		return (-1);
	if ((index + 1) / 8 > l)
		return (-1);
	shift <<= index;
	shift = ~shift;
	*n &= shift;
	return (1);
}
