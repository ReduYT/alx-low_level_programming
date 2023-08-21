#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 *
 * Return: returns the generated password
 */

int main(void) {
    srand(time(NULL));

    int i;
    char* charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789=";
    int charset_size = sizeof(charset) - 1;
    int randomIndex; // Renamed to avoid conflict with 'index' function

    char password[13];
    for (i = 0; i < 12; i++) {
        randomIndex = rand() % charset_size; // Renamed 'index' to 'randomIndex'
        password[i] = charset[randomIndex];
    }
    password[12] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
