#include "main.h"
/**
 * flip_bits - return number of bits needed to flip to get from @n to @m
 * @n: integer
 * @m: integer
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m;
	unsigned int c = 0;

	while (k)
	{
		c++;
		k &= (k - 1);
	}
	return (c);
}
