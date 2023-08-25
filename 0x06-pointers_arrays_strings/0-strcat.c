#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;

	while (*dest2 != '\0')
		dest2++;

	while (*src != '\0')
	{
		*dest2 = *src;
		dest2++;
		src++;
	}

	*dest2* = '\0';

	return dest;
}

