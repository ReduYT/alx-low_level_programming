#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which we want the square root.
 *
 * Return: The natural square root of n.
 *
 * sqrt2 - Helper function for finding square root using binary search.
 * @n: The number for which we want the square root.
 * @first: The start of the search range.
 * @last: The end of the search range.
 *
 */
int sqrt2(int n, int first, int last);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (sqrt2(n, 1, n));
}

int sqrt2(int n, int first, int last)
{
	int mid = (first + last) / 2;

	if (mid * mid == n)
		return (mid);
	if (last < first)
		return (-1);

	if (mid * mid > n)
		return (sqrt2(n, first, mid - 1));

	return (sqrt2(n, mid + 1, last));
}

