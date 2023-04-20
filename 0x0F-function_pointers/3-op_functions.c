#include "3-calc.h"

/**
 * op_add - add @a and @b
 * @a: integer
 * @b: integer
 *
 * Return: operation result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of @a and @b
 * @a: integer
 * @b: integer
 *
 * Return: operation result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply @a and @b
 * @a: integer
 * @b: integer
 *
 * Return: operation result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devide @a by @b
 * @a: integer
 * @b: integer
 *
 * Return: operation result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of @a devided by @b
 * @a: integer
 * @b: integer
 *
 * Return: operation result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
