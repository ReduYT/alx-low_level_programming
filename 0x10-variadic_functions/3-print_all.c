#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints variable arguments based on a format string.
 * @format: A format string specifying the types of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	int i = 0;
	int printed = 0;

	while (format && format[i])
	{
		if (printed)
			printf(", ");

		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			printed = 1;
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			printed = 1;
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			printed = 1;
		}
		else if (format[i] == 's')
		{
			char *string = va_arg(args, char *);

			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);
			printed = 1;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
