#include "main.h"
/**
*print_line - prints straight line
*@n: char to be checked
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n);
}
