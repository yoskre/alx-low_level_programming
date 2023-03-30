#include "main.h"
#include <limits.h>
/**
 * print_number - prints @n
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int coef = 10;

	while (n / coef)
		coef *= 10;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (coef / 10)
	{
		coef /= 10;
		_putchar('0' + (n / coef) % 10);
	}
}
