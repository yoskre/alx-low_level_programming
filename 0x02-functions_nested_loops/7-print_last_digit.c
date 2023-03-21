#include "main.h"

/**
 * print_last_digit - returns and prints last digit of @n
 * @n: number to extract last digit from
 *
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	long int l = n;

	if (l < 0)
		l = l * (-1);
	l = l % 10;
	_putchar('0' + l);
	return (l);
}
