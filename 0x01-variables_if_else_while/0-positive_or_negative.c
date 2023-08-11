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
		printf("positive");
	else if (n == 0)
		printf("zero");
	else
		printf("negative");
	return (0);
}
