#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 if @c is lower case. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
