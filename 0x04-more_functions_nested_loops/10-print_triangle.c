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

		for (i = size - 1; i >= 0; i--)
		{
			for (j = i; j >= 0;  j--)
			{
				putchar(' ');
			}
			for (int k = i; k < size - 1; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
