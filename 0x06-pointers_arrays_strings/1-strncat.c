#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string to be appended
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_dest;
	int src_index;

	while (dest[length] != '\0')
	{
		length_of_dest++;
	}

	while (src[src_index] != '\0' && src_index < n)
	{

		dest[length_of_dest] = src[src_index];
		length_of_dest++;
		src_index++;
	}
	dest[length_of_dest] = '\0';

	return (dest);
}
