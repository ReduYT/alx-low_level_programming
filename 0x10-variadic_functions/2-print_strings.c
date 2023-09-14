#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings
* @separator: string printed between strings
* @n: number of strings passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
