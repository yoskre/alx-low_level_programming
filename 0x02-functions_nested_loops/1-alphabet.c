#include "main.h"

/**
 * print_alphabet - prints the alphabet - to stdout
 *
 * Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: void.
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i++);
	}
	_putchar('\n');
}
