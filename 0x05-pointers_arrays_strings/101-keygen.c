#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 *
 * Return: returns the generated password
 */
    int i;
    char* charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789=";
    int charset_size = sizeof(charset) - 1;
    int index
int main(void) {
    srand(time(NULL));



    char password[13];
    for (i = 0; i < 12; i++) {
        index = rand() % charset_size;
        password[i] = charset[index];
    }
    password[12] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}

