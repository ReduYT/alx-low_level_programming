#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */

void puts_half(char *str)
{
	int n = (strlen(str) - 1) / 2;
	int i;

	for (i = n; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}

