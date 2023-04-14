#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: starting value
 * @max: end value
 *
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int n = min;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		p[i] = n++;
	return (p);
}
