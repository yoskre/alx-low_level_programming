#include "main.h"

/**
 * print_last_digit - returns and prints last digit of @n
 * @n: number to extract last digit from
 *
 * Return: last digit of @n
 */
int print_last_digit(int n)
{

	if (n < 0)
		n *= -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
