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
	int i = 0;
	int length = 0;

	for (i = 0; i < strlen(dest); i++)
	{
		length++;
	}
	for (i = 0; strlen(dest); i++)
	{
		dest[length++] = src[i];
	}
	return (dest);
}
