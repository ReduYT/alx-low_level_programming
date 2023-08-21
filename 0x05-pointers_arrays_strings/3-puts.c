#include "main.h"
#include <string.h>

/**
 * _puts - Prints a string followed by a newline.
 *
 * @str: Pointer to the string to be printed.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
