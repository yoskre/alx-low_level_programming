#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array and initializes it with @c
 * @size: size of array
 * @c: character
 *
 * Return: pointer to the array, NULL if size is 0 or function fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (!size)
		return (NULL);
	p = malloc(size);
	if (!p)
		return (NULL);
	for (i = 0; i <= size; i++)
		p[i] = c;
	return (p);
}
