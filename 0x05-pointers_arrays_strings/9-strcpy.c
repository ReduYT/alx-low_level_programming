#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies a string pointed to by
 * src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	dest[strlen(src)] = '\0';

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}

