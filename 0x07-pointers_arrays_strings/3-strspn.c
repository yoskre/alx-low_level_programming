#include "main.h"
/**
 * _strspn - find initial number of bytes of @accept in @s
 * @s: string
 * @accept: bytes to search for
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*accept)
	{
		int i;

		for (i = 0; s[i]; i++)
			if (s[i] == *accept)
			{
				counter++;
				break;
			}
		if (*(accept + 1) == '\0')
			counter++;
		accept++;
	}
	return (counter);
}
