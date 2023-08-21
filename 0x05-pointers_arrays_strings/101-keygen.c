#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * getRandomChar - Generates a random character from a given set.
 *
 * Return: A randomly selected character.
 */

char getRandomChar() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

void generateRandomPassword(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = getRandomChar();
    }
    password[length] = '\0';
}
int main(void)
{
	srand(time(NULL));
	char *password = (char *)malloc(12);
	generateRandomPassword(password, 12);
	printf("Generated Password %s\n", password);
	return (0);
}
