#include "main.h"
/**
 * _strlen_recursion - gives length of @s
 * @s: string to be measured
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(++s));
}
