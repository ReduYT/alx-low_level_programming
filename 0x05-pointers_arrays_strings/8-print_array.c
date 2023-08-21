#include "main.h"
#include <string.h>

/**
 * print_array - Prints an array of integers upto n.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */

void print_array(int *a, int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (i == a[n - 1])
			_putchar(i + '0');
		else
			printf("%d, ", i);
	}
}
