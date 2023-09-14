#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - calculates sum of arguments
* @n: num of args
* Return: returns sum of args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int sum;
	unsigned int i = 0;

	if (n != 0)
	{
		va_start(l, n);
		while (i < n)
		{
			sum = sum + va_arg(l, int);
			i++;
		}
		va_end(l);
		return (sum);
	}
	return (0);
}

