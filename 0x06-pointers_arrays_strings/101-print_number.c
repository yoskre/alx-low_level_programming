#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * print_number - prints @n
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int coef = 1;

	while (coef <= n / 10 || -coef >= n / 10)
	{
		coef *= 10;
	}
	if (n < 0)
	{
		if (n == INT_MIN)
			n = n + 1;
		n = -n;
		_putchar('-');
	}
	while (coef)
	{
		_putchar('0' + (n / coef) % 10);
		coef /= 10;
	}
}
