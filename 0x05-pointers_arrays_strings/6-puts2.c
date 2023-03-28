#include "main.h"

/**
 * puts2 - prints every other character of @str
 * @str: string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		++str;
		if ((*str) == '\0')
			break;
		++str;
	}
	_putchar('\n');
}
