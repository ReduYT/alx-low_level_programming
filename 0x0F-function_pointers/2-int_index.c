#include "function_pointers.h"

/**
*int_index - searches for numbers
*@array: Array of numbers
*@size: array size
*@cmp: function to compare the values
*Return: returns -1 if there is no element or size < 1
* otherwise first index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

		return (-1);
}
