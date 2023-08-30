#include "main.h"
/**
 * is_primenum - Helper function for
 * checking if a number is prime re * cursively.
 * is_prime_number - checks if num is prime
 * @n: The number to be checked.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_primenum(int n, int divisor);

int is_prime_number(int n)
{
	return (is_primenum(n, 2));
}
int is_primenum(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_primenum(n, divisor + 1));
}
