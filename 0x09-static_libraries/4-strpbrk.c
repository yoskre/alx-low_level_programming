#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - find initial occurence of bytes of @accept in @s
 * @s: string
 * @accept: bytes to search for
 *
 * Return: location in @s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i;

		for (i = 0; accept[i]; i++)
			if (accept[i] == *s)
				return (s);
		s++;
	}
	return (NULL);
}
