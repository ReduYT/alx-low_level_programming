#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print opcodes from a given start address.
 * @start: The start address of the code.
 * @bytes: The number of bytes to print.
 */
void print_opcodes(char *start, int bytes)
{
  for (int i = 0; i < bytes; i++)
  {
    printf("%02hhx", start[i]);
        if (i < bytes - 1)
            printf(" ");
        else
            printf("\n");
    }
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 if arguments are incorrect, 2 if bytes are negative.
 */
int main(int argc, char *argv[])
{
    int bytes;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(argv[1]);
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    print_opcodes((char *)&main, bytes);

    return 0;
}
