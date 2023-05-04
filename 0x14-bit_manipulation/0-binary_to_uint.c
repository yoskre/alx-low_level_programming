#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	char *end = NULL;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		if (isdigit(b[i]) == 0)
			return (0);
	return (strtoul(b, &end, 2));
}
