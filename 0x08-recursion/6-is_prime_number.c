#include "main.h"
/**
 * is_prime_recursive - Helper function for
 * checking if a number is prime re * cursively.
 * @n: The number to be checked.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
        return (is_prime_recursive(n, 2));
}
int is_prime_recursive(int n, int divisor)
{
        if (n <= 1)
                return (0);
        if (divisor * divisor > n)
                return (1);
        if (n % divisor == 0)
                return (0);
        return (is_prime_recursive(n, divisor + 1));
}
