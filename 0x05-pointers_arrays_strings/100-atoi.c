#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value extracted from the string.
 */

#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	int num = 0;
	int j = 1;

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '-')
		{
			j = -j;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else if (num > 0)
			break;
	return (num * j);
	}
}
