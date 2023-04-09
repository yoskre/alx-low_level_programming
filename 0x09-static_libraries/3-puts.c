#include "main.h"

/**
 * _puts - prints a sting and a new line character
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*(str))
		_putchar(*(str++));
	_putchar('\n');
}
