#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value extracted from the string.
 */

int _atoi(char *s)
{
	int j= 1;
	unsigned int k = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			j *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			k = k * 10 + (*s - '0');
		}
		else if (k > 0) {
			break;
		}
	}

	return (k * j);
}
