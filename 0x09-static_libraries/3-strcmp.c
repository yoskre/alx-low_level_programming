#include "main.h"

/**
 * _strcmp - copies string @src to @dest
 * @s1: string to be copied into
 * @s2: string to be compied
 *
 * Return: byte value of : @s1 - @s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2 || *s1 < *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
