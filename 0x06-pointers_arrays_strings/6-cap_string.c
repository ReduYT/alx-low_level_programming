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
    for (size_t i = 0; i < strlen(str); i++)
    {
        if ((i == 0 || isspace(str[i - 1]) ||
             strchr(",;.!?\"(){}", str[i - 1])) && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

