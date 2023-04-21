#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - print anything
 * @format: argument types
 * @...: thing to be printed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int formatlen = strlen(format);
	int i = 0;

	va_start(arg, format);
	while (format[i])
	{
		char *s;

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		case 's':
			s = va_arg(arg, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (i + 1 < formatlen)
			printf(", ");
		i++;
	}
	va_end(arg);
	printf("\n");
}
