#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers upto n.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
