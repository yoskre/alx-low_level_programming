#include "main.h"
/**
 * sqrt_guess - repeated subtraction algo for _sqrt_recursion
 * @x: n
 * @y: odd number
 *
 * Return: square root of @n
 */
int sqrt_guess(int x, int y)
{
	if (x < 0)
		return (-1);
	if ((x - y) == 0)
		return (1);
	if ((x - y) < 0)
		return (0);
	return (1 + sqrt_guess(x - y, y + 2));
}
/**
 * _sqrt_recursion - natural square root of @n
 * @n: number
 *
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = sqrt_guess(n, 1);
	if (n == (sqrt * sqrt))
		return (sqrt);
	else
		return (-1);
}
