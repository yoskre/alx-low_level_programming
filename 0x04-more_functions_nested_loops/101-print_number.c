#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i;
	int c;

	if (n < 0)
		i = n * (-1);
	else
		i = n;
	c = 1;
	while (i > 0)
	{
		c *= 10;
		i /= 10;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		if (((n / c) % 10) == 0)
			c /= 10;
		while (c > 0)
		{
			_putchar('0' + ((n / c) % 10));
			c /= 10;
		}
	}
	_putchar('\n');
}
