#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function to print numbers
* @separator: String printed between nums
* @n: number of ints passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i = 0;

	va_start(l, n);

	while (i < n)
	{
		printf("%d", va_arg(l, int));
		i++;

		if (separator)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(l);
}
