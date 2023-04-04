#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate @needle in @haystack
 * @haystack: string to be searched
 * @needle: string to search for
 *
 * Return: if found, location of @needle. otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *ph = NULL;
	char *pn = needle;

	while (*needle)
	{
		while (*haystack)
		{
			if (*haystack == *needle)
			{
				if (!ph)
					ph = haystack;
				needle++;
			}
			else
			{
				ph = NULL;
				needle = pn;
			}
			haystack++;
		}
		if (*needle != '\0' && *haystack == '\0')
			return (NULL);
	}
	return (ph);
}
