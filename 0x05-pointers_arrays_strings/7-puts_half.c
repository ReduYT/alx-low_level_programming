#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */

void puts_half(char *str)
{
	size_t n = (strlen(str) - 1) / 2;
	size_t i;

	for (i = n; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

