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
	printf("Last digit of %d is ", n);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 != 0 && n % 10 < 6)
		printf("and is less than 6 and not 0\n");
	printf("\n");
	return (0);
}
