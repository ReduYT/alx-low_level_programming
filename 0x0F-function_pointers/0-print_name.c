#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer of function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		(*f)(name);
	}
}
