#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rev_string - Reverses a string in place.
 *
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	size_t i;
	
	char *temp;
	
	int j = strlen(s) - 1;
	
	temp = (char *)malloc(strlen(s) + 1);


	for (i = 0; i < strlen(s); i++)
	{
		*(temp + j) = s[i];
		j--;
	}

	temp[strlen(s)] = '\0';

	for (i = 0; i < strlen(s); i++)
	{
		s[i] = *(temp + i);
	}
}
