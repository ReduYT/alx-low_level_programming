#include <string.h>
#include <ctype.h>

/**
 * cap_string - Capitalize the first letter of words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		     str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		     str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		     str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		     str[i] == '}') && isalpha(str[i + 1])) {
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
