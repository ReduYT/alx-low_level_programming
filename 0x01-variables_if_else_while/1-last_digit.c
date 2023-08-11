#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - my main function
 *
 * program outputs a message
 *
 *Return: returns 0 everytime
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5");
	else if (n % 10 == 0)
		printf("and is 0");
	else if (n % 10 != 0 && n % 10 < 6)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
