#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
