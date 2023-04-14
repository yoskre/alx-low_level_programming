#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of array
 * @size: size of @nmemb
 *
 * Return: pointer to created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
