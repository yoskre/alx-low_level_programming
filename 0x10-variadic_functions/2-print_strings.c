#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of @...
 * @...: string to pe printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);
	if (n > 0)
		for (i = 0; i < n; i++)
		{
			s = va_arg(arg, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (separator && (i < n - 1))
				printf("%s", separator);
		}
	va_end(arg);
	printf("\n");
}
