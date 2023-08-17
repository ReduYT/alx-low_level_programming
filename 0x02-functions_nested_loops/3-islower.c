#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always returns 0
 *
 *_isLower - returns 1 if character is lowercase
 *
 *int c - is to be checked for case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
