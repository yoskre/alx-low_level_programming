#include "main.h"

/**
 * _abs - returns absolute value of @n
 * @n: number to calculate absolute value for
 *
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
