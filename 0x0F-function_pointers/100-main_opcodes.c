#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 if arguments are incorrect, 2 if bytes are negative.
 */
int main(int argc, char *argv[])
{
    int i, j;

    if (argc != 2 || (j = atoi(argv[1])) < 0)
    {
        printf("Error\n");
        return (argc != 2 ? 1 : 2);
    }

    for (i = 0; i < j; i++)
    {
        printf("%02hhx", *((char *)main + i));
        printf(i < j - 1 ? " " : "\n");
    }

    return (0);
}
