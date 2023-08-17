#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;
		int k;

		for (i = size; i > 0; i--)
		{
			for (j = i - 1; j > 0;  j--)
			{
				_putchar(' ');
			}
			for (k = i; k <= size; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
