#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(0));

    char output[26]; 
    
    for (int i = 0; i < 26; i++) {
        char c = rand() % 94 + 33; 
        output[i] = c;
    }

    int remainingSum = 2772 - (int)output[0]; 
    output[2645] = remainingSum; 

    printf("%s\n", output);

    return 0;
}
