#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet x10 - to stdout
 *
 * Write a function that prints the alphabet,
 * ten times
 * in lowercase, followed by a new line.
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		i++;
		while (c <= 'z')
		{
			_putchar(c++);
		}
		_putchar('\n');
	}
}
