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

		for (i = size; i > 0; i--)
		{
			for (j = i; j > 0;  j--)
			{
				_putchar(' ');
			}
			for (int k = i; k <= size - 2; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
