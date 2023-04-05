#include "main.h"
/**
 * factorial - factorial of @n
 * @n: string to be factored
 *
 * Return: factorial of @s
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (n + factorial(n - 1));
}
