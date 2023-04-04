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
	int head = 0;
	int f = 0;

	while (s[head])
		head++;
	while (*accept)
	{
		int i;

		for (i = 0; s[i]; i++)
			if (s[i] == *accept)
			{
				f = 1;
				if (head > i)
					head = i;
			}
		accept++;
	}
	if (*accept == '\0' || f)
		return (&s[head]);
	return (NULL);
}
