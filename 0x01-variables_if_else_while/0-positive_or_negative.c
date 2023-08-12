#include <time.h>
#include <stdlib.h>
#include <stdio.h>
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
	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");
	return (0);
}
