#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to be measured
 *
 * Return: length of @s
 */
int _strlen(char *s)
{
	int l = 0;

	while (*(s++))
		l++;
	return (l);
}
