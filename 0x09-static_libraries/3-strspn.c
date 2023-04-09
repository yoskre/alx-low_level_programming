#include "main.h"
/**
 * _strspn - find initial number of bytes of @s that are in @accept
 * @s: string
 * @accept: bytes to search for
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*s)
	{
		int i;

		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
			{
				counter++;
				break;
			}
		if (accept[i] == '\0')
			break;
		s++;
	}
	return (counter);
}
