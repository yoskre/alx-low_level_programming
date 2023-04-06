#include "main.h"
/**
 * IsPrime - determines if @n is prime recursively
 * @n: number
 * @i: should start with 5
 *
 * Return: 1 if @n is prime. 0 otherwise
 */
int IsPrime(int n, int i)
{
	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (IsPrime(n, i + 6));
}
/**
 * is_prime_number - determines if @n is prime
 * @n: number
 *
 * Return: 1 if @n is prime. 0 otherwise
 */
int is_prime_number(int n)
{
	return (IsPrime(n, 5));
}
