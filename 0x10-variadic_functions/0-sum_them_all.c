#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculate sum of numbers
 * @n: number of @...
 * @...: args to sum
 *
 * Return: sum of @...
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	va_start(arg, n);
	if (n > 0)
		for (i = 0; i < n; i++)
			sum += va_arg(arg, int);
	va_end(arg);
	return(sum);
}
