#include "main.h"

/**
 * leet - Encodes a string according to the leet rules.
 * @str: The string to be encoded.
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char letters[] = "OLEAT";
	char numbers[] = "01347";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}

