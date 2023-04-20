#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print number
 * @separator: separator
 * @n: number of @...
 * @...: numbers to pe printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	if (n > 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, int));
			if (separator && (i < n - 1))
				printf("%s", separator);
		}
	va_end(arg);
	printf("\n");
}
