#include "main.h"

/**
 * print_square - draws a square
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int height;
		int length;

		for (height = 0; height < size; height++)
		{
			for (length = 0; length < size; length++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
