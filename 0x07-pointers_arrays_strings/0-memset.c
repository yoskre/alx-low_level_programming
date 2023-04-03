#include "main.h"
/**
 * _memset - fill the first @n of @s with @b
 * @s: buffer
 * @b: constant
 * @n: number
 *
 * Return: pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
