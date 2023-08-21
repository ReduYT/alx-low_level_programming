#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first value to be swapped.
 * @b: Pointer to the second value to be swapped.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
