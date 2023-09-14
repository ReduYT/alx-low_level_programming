#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints variable arguments based on a format string.
 * @format: A format string specifying the types of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list l;
	int i = 0;
	char *s;

	va_start(l, format);

	if (format)
	{
		while (format && format[i])
		{
			if (format[i] == 'c')
				printf("%c", (char) va_arg(l, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(l, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(l, double));
			else if (format[i] == 's')
			{
				s = va_arg(l, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
			}
			if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	}	
	printf("\n");
	va_end(l);
}
