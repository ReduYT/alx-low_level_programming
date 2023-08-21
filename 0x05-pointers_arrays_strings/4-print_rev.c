#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	size_t i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
