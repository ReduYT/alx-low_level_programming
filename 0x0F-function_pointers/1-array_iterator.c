#include "function_pointers.h"

/**
*array_iterator - executes function while iterating through array
*@array: array
*@size: array size
*@action: function executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action && size > 0 && array)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

