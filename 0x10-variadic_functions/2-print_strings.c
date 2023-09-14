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
	unsigned int i = 0;
	char *s;

	while (i < n)
	{
		s = va_arg(l, n);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i != n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	printf("\n");
	va_end(l);
}


