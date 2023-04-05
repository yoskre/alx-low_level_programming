#include "main.h"
/**
 * _pow_recursion - @x raised to @y
 * @x: number
 * @y: power
 *
 * Return: value of @x^@y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
